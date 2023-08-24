#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

ll w[110], v[110], dp[110][110000];
int main() {
  int N, W; cin >> N >> W;
	rep(i, N) cin >> w[i] >> v[i];
	for(int i=0; i < 110; i++) {
		for(int j=0; j<110000; j++) {
     dp[i][j] = -1;
		}
	}
	dp[0][0] = 0;
	for(int i=1; i <= N; i++) {
		for(int j=0; j <= W; j++) {
			dp[i][j] = dp[i-1][j];
			if (j - w[i-1] >= 0) {
				dp[i][j] = max(dp[i][j], dp[i-1][j-w[i-1]] + v[i-1]);
			}
		}
		// rep(i, N+1) {
		// 	rep(j, W+1) {
		// 		cout << dp[i][j] << " ";
		// 	}
		// 	cout << endl;
		// }
		// cout << endl;
	}
	ll answer = 0;
	rep(i, W+1) {
		// debug(answer);
		answer = max(dp[N][i], answer);
	}

	cout << answer << endl;
	return 0;
}

