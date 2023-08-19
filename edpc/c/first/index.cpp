#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
	int N; cin >> N;
	// ポイント, 前選んだやつ
	vector<vector<ll>> dp(N, vector<ll>(3, 0));
	vector<vector<ll>> list(N, vector<ll>(3));
	rep(i, N) { rep(j, 3) { cin >> list[i][j]; } }
	dp[0][0] = list[0][0]; dp[0][1] = list[0][1]; dp[0][2] = list[0][2];
	
	rep(i, N-1) {
		rep(j, 3) {
			// 前回がA
			if (j == 0) {
				// b
				dp[i+1][1] = max(dp[i+1][1], dp[i][j] + list[i+1][1]);

				// c
				dp[i+1][2] = max(dp[i+1][2], dp[i][j] + list[i+1][2]);
			}

			// 前回がB
			if (j == 1) {
				// a
				dp[i+1][0] = max(dp[i+1][0], dp[i][j] + list[i+1][0]);

				// c
				dp[i+1][2] = max(dp[i+1][2], dp[i][j] + list[i+1][2]);
			}

			// 前回がC
			if (j == 2) {
				// a
				dp[i+1][0] = max(dp[i+1][0], dp[i][j] + list[i+1][0]);

				// b
				dp[i+1][1] = max(dp[i+1][1], dp[i][j] + list[i+1][1]);

			}
		}

	}

	cout << max(dp[N-1][0], max(dp[N-1][1], dp[N-1][2]));
	return 0;
}

