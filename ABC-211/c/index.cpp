#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
  string s; cin >> s; 
  int n = s.size();
  vector<vector<int>> dp(n+1, vector<int>(9));
  rep(i, n) dp[i][0] = 1;
  ll mod = 100000007;
  string t = "chokudai"; 
  
  rep(i, n) {
    rep(j, 8) {
      if (s[i] != t[j]) {
        dp[i+1][j+1] = dp[i][j+1];
      } else {
        dp[i+1][j+1] = (dp[i][j+1] + dp[i][j]) % mod;
      }
    }
  }
  for (auto d: dp) {
    for (auto p: d) {
      cout << p << ", ";
    }
    cout << endl;
  }
  cout << dp[n][8] << endl;
	return 0;
}

