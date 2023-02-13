#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
	int N, M; cin >> N >> M;
	vector<int> W(N); rep(i, N) cin >> W[i];
	vector<int> V(N); rep(i, N) cin >> V[i];
	vector<vector<int>> dp(N+1, vector<int>(M+1));
	rep(i, N+1) {
		if (i == N) continue;
		rep(j, M+1) {
			dp[i+1][j] = max(dp[i+1][j], dp[i][j]);
			if (j + W[i] < M+1) {
				dp[i+1][j+W[i]] = max(dp[i+1][j+W[i]], dp[i][j]+V[i]);
			}
		}
	}

	int answer = 0;
	for (auto v: dp[N]) {
		answer = max(answer, v);
	}
	cout << answer << endl;
	return 0;
}

