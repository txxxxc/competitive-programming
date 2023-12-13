#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<ll>>;

int main() {
	int N, M; cin >> N >> M;
	bool answer = true;
	Graph B(N, vector<ll>(M));
	rep(i, N) rep(j, M) {
		ll v; cin >> v;
		B[i][j] = v;
	}

	rep(i, N) rep(j, M) {
		if (j+1 < M && B[i][j] + 1 != B[i][j+1]) {
			answer = false;
		}
		if (i+1 < N && B[i][j] + 7 != B[i+1][j]) {
			answer = false;
		}
		if (B[i][j] % 7 == 0 && j != M-1) {
			answer = false;
		}
	}

	if (answer) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}

