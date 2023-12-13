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
	int N; cin >> N;
	bool result = false;
  vector<vector<int>> l(N, vector<int>());
	rep(i, N-1) {
		int a, b; cin >> a >> b; a--; b--;
		l[a].push_back(b);
		l[b].push_back(a);
		if (l[a].size() == N-1 || l[b].size() == N-1) {
			result = true;
			break;
		}
	}
	if (result) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;
}

