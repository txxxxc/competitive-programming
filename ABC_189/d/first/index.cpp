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
  int N;
  cin >> N;
  vector<vector<ll>> dp(N + 1, vector<ll>(2));
  dp[0][0] = 1;
  dp[0][1] = 1;
  for (int i = 1; i < N + 1; i++) {
    string s;
    cin >> s;
    if (s == "AND") {
      ll t = 0;
      ll f = 0;
      // true * true
      t += dp[i - 1][1];

      // true * false
      f += dp[i - 1][0];

      // false * true
      f += dp[i - 1][1];

      // false * false
      f += dp[i - 1][0];

      dp[i][0] = f;
      dp[i][1] = t;

    } else if (s == "OR") {
      ll t = 0;
      ll f = 0;

      // true * true
      t += dp[i - 1][1];

      // true * false
      t += dp[i - 1][1];

      // false * true
      t += dp[i - 1][0];

      // false * false
      f += dp[i - 1][0];
      dp[i][0] = f;
      dp[i][1] = t;
    }
  }

  cout << dp[N][1] << endl;

  return 0;
}
