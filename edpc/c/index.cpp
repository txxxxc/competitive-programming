#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
	int n; cin >> n;
	vector<vector<int>> list(n, vector<int>(3, 0));
	vector<vector<int>> dp(n+1, vector<int>(3, 0));
	rep(i, n) {
		rep(j, 3) {
			cin >> list[i][j];
		}
	}

	rep(i, n) {
		rep(j, 3) {
			if (j == 0) {
				dp[i+1][j+1] = max(dp[i][j] + list[i][j+1], dp[i+1][j+1]);
				dp[i+1][j+2] = max(dp[i][j] + list[i][j+2], dp[i+1][j+2]);
			}		

			if (j == 1) {
				dp[i+1][j-1] = max(dp[i][j] + list[i][j-1], dp[i+1][j-1]);
				dp[i+1][j+1] = max(dp[i][j] + list[i][j+1], dp[i+1][j+1]);
			}		

			if (j == 2) {
				dp[i+1][j-1] = max(dp[i][j] + list[i][j-1], dp[i+1][j-1]);
				dp[i+1][j-2] = max(dp[i][j] + list[i][j-2], dp[i+1][j-2]);
			}		
		}
	}

	cout << max(dp[n][0], max(dp[n][1], dp[n][2])) << endl;
	return 0;
}

