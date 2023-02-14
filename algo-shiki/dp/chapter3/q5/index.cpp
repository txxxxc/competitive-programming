#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int INF = 1000;
int main() {
	int N, M; cin >> N >> M;
	vector<int> W(N); rep(i, N) cin >> W[i];
	vector<vector<int>> dp(N+1, vector<int>(M+1, INF));
	dp[0][0] = 0;
	rep(i, N+1) {
		if (i == N) continue;
		rep(j, M+1) {
			dp[i+1][j] = min(dp[i][j], dp[i+1][j]);

			if (j+W[i] < M+1) {
				dp[i+1][j+W[i]] = min(dp[i+1][j+W[i]], dp[i][j]+1);
			}
		}
	}
	
	if (dp[N][M] == INF) {
		cout << -1 << endl;
	} else {
		cout << dp[N][M] << endl;
	}
	return 0;
}

