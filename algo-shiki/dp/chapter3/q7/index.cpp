#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int INF = 1001;
int main() {
	int N; cin >> N;
	vector<int> W(N); rep(i, N) cin >> W[i];
	vector<vector<bool>> dp(N+1, vector<bool>(INF));
	dp[0][0] = true;

	rep(i, N) {
		rep(j, INF) {
			if (!dp[i][j]) continue;
			
			int plus = j+W[i];
			int minus = abs(j-W[i]);
			if (plus < INF) dp[i+1][plus] = true;
			if (minus >= 0) dp[i+1][minus] = true;
		}
	}


	int answer = INF;
	rep(i, INF) {
		if (dp[N][i]) {
			answer = min(answer, i);
		}
	}
	cout << answer << endl;
	return 0;
}

