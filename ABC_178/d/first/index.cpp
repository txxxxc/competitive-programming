#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL << 62) - (1LL << 31))
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

int main() {
  int n; cin >> n;
  vector<ll> dp(n+1, 0);
  dp[0] = 1;
  for (int i = 1; i <= n; i++){
    for (int j = 0; j<=i-3; j++) {
      dp[i] += dp[j];
      dp[i] %= 1000000007;
    }
  }

  cout << dp[n] << endl;

  return 0; 
}
