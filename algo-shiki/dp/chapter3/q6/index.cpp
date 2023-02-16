#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
	int N, A, B; cin >> N >> A >> B;
	vector<int> X(N); rep(i, N) cin >> X[i];
	vector<vector<bool>> dp(N+1, vector<bool>(A));
	dp[0][0] = true;
	rep(i, N+1) {
		if (i == N) { continue; }
		rep(j, A) {
			if(!dp[i][j]) { continue; }
			dp[i+1][j] = dp[i][j];
			int index = (j+X[i]) % A;
			dp[i+1][index] = true;
		}
	}

	if (dp[N][B]) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}
