#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
	int N, W; cin >> N >> W;
	vector<ll> weight(N, 0);
	vector<ll> value(N, 0);
	rep(i, N) cin >> weight[i] >> value[i];
	vector<vector<ll>> dp(N, vector<ll>(W+1, -1));
	dp[0][weight[0]] = value[0]; 
	dp[0][0] = 0;
	rep(i, N-1) {
		rep(j, W+1) {
			if (dp[i][j] != -1) {
				// 選ばない
				dp[i+1][j] = max(dp[i][j], dp[i+1][j]);

				// 選ぶ
				ll new_weight = j + weight[i+1];
				ll new_value = dp[i][j] + value[i+1];

				if (new_weight <= W) {
					dp[i+1][new_weight] = max(dp[i+1][new_weight], new_value);
				}
			}
		}
	}
	ll answer = 0;
	rep(i, W+1) {
		answer = max(answer, dp[N-1][i]);
	}
	cout << answer << endl;
	return 0;
}

