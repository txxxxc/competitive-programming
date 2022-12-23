#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int MAX = 1000000000;
int main() {
	int n; cin >> n;
	vector<int> h(n);
	rep(i, n)	cin >> h[i];
	vector<int> dp(n, MAX);
	dp[0] = 0;
	rep(i, n-1) {
		if (dp[i] == MAX) continue;
		dp[i+1] = min(abs(h[i]-h[i+1]) + dp[i], dp[i+1]);
		if (i+2 >= n) continue;
		dp[i+2] = min(abs(h[i]-h[i+2]) + dp[i], dp[i+2]);
	}

	cout << dp[n-1];
	return 0;
}

