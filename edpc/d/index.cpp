#include <bits/stdc++.h>
#include <utility>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
	int N, W; cin >> N >> W;			
	vector<pair<int, int>> list(N);
	rep(i, N) {
		int w, v; cin >> w >> v;
		pair<int, int> p(w, v);
		list[i] = p;
	}
	vector<vector<ll>> dp(N+1, vector<ll>(W+1, 0));

	rep(i, N) rep(j, W+1) {
		pair<int, int> p = list[i];
		int w = p.first;
		int v = p.second;
		if (w <= j) {
			// 選ぶ時
			dp[i+1][j-w] = max(dp[i][j] + v, dp[i+1][j-w]);
		} 	
		dp[i+1][j] = dp[i][j];
	}
	
	ll answer = 0;
	for (auto v: dp[N]) {
		answer = max(answer, v);
	}
	
	cout << answer << endl;
	return 0;
}

