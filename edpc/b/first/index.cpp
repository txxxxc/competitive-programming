#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
	int INF = 1e9;
	int N, K; cin >> N >> K;
	vector<int> h(N, 0); rep(i, N) cin >> h[i];
	vector<int> dp(N, INF);
	dp[0] = 0;
	for(int i = 0; i < N; i++) {
		int limit = min(N, i+K+1);
    for(int j = i+1; j < limit; j++) {
			dp[j] = min(dp[j], dp[i] + abs(h[i]-h[j]));
		}
	}


	cout << dp[N-1] << endl;
	return 0;
}

