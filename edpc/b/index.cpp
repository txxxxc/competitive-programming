#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int MAX = 1000000000;
int main() {
	int n; cin >> n;
	int k; cin >> k;
	vector<int> h(n);
	rep(i, n)	cin >> h[i];
	vector<int> dp(n, MAX);
	dp[0] = 0;
	rep(i, n) {
		rep(j, k+1) {
			if (j == 0) continue;
			if (i+j >= n) continue;
			dp[i+j] = min(abs(h[i]-h[i+j]) + dp[i], dp[i+j]);
		}
	}

	cout << dp[n-1];
	return 0;
}

