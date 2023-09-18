#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
	ll N; cin >> N;
	vector<ll> dp(N+1);
	for (ll i = 1; i < N+1; i++) {
		dp[i] = dp[i-1] + i - pow(10, to_string(i).length()-1) + 1;
	}
	cout << dp[N] % 998244353 << endl;
	return 0;
}

