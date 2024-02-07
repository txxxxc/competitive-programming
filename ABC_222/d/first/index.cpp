#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

int main() {
	int N; cin >> N;
	ll answer = 0;
	ll inf = 998244353;
	vector<int> A(N), B(N);
	rep(i, N) cin >> A[i];
	rep(i, N) cin >> B[i];
	vector<vector<int>> dp(3001, vector<int>(3001, 0));
	dp[0][0] = 1;
	vector<int> sum(3001, 0);
	for(int i = 1; i<=N; i++) {
		sum[0] = dp[i-1][0];
		for(int j = 1; j <= B[i-1]; j++) {
			sum[j] = sum[j-1] + dp[i-1][j];
			sum[j] %= inf;
		}
		for(int k = A[i-1]; k <= B[i-1]; k++) {
			dp[i][k] += sum[k];
			dp[i][k] %= inf;
		}
	}

  rep(i, 3001) {
		answer += dp[N][i];
		answer %= inf;
	}

	cout << answer << endl;
	return 0;
}
