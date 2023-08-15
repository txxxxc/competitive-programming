#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

ll INF = 1LL << 60;
int main() {
	ll N; cin >> N;
	vector<ll> h(N, 0); rep(i, N) cin >> h[i];
	vector<ll> dp(N, INF);
	dp[0] = 0;
	rep(i, N) {	
		if (i+1 < N) {
			dp[i+1] = min(dp[i+1], dp[i] + abs(h[i]-h[i+1]));
		}

		if (i+2 < N) {
			dp[i+2] = min(dp[i+2], dp[i] + abs(h[i]-h[i+2]));
		}
	}
	cout << dp[N-1] << endl;

	return 0;
}

