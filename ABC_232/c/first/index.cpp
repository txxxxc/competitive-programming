#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

int main() {
	int N, M; cin >> N >> M;
	vector<vector<int>> ga(N, vector<int>(N, 0)), gb(N, vector<int>(N, 0));
	vector<P> p(M);
	rep(i, M) {
		int a, b; cin >> a >> b; a--; b--;
		ga[a][b] = ga[b][a] = 1;
	}
	rep(i, M) {
		int a, b; cin >> a >> b; a--; b--;
		gb[a][b] = gb[b][a] = 1;
		p[i] = make_pair(a, b);
	}

	vector<int> l(N);
	rep(i, N) l[i] = i;
	do {
		vector<vector<int>> g(N, vector<int>(N, 0));
		rep(i, N) {
			rep(j, N) {
				g[i][j] = gb[l[i]][l[j]];
			}
		}
		if (g == ga) {
			cout << "Yes" << endl;
			return 0;
		}

	} while (next_permutation(l.begin(), l.end()));


	cout << "No" << endl;
	return 0;
}
