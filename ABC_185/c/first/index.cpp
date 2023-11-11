#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

// iセンチ目までにj回切ったやつ

int main() {
	int L; cin >> L;
	vector<vector<ll>> dp(L+1, vector<ll>(12, -1));
	// 1センチ目までに0回切ったやつ
	dp[1][0] = 1;
	for(int i = 1; i < L; i++) {
		rep(j, 12) {
			if (dp[i][j] == -1) continue;
			// 切る
			if (j + 1 < 12) {
				if (dp[i+1][j+1] == -1) {
          dp[i+1][j+1] = dp[i][j];
				} else {
					dp[i+1][j+1] = dp[i][j] + dp[i+1][j+1];
				}
			}

			// 切らない
			if (dp[i+1][j] == -1) {
				dp[i+1][j] = dp[i][j];
			} else {
				dp[i+1][j] = dp[i+1][j] + dp[i][j];
			}
		}
	}

	cout << dp[L][11] << endl;

	return 0;
}

