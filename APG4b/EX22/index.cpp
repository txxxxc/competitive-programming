#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
	vector<int> W(N, 0);
	for (int i=0; i<N; i++) {
			cin >> W[i];
	}
	vector<vector<int> > dp(N+1, vector<int>(M+1, -1));
	dp[0][0] = 0;
	for (int i=0; i<N; i++) {
			for (int j=0; j<M; i++) {
					if (dp[i][j] < 0) continue;
					dp[i+1][j] = dp[i][j];
					if (j+W[i] < M) {
							if (dp[i+1][j+W[i]] == -1) {
									dp[i+1][j+W[i]] = dp[i][j]+1;
							} else {
									dp[i+1][j+W[i]] = min(dp[i+1][j+W[i]], dp[i][j]+1);
							}
							
					}
			}
	}
	cout << dp[N][M] << endl;
	return 0;
}
