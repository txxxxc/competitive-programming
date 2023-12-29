#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL << 62) - (1LL << 31))
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using P = pair<ll, ll>;
using Graph = vector<vector<int>>;

/*
0 1 2 3 4
1 | 2 3 4
3 | 3 4
6 | 4
0
*/

int main() {
  int N;
  cin >> N;
  deque<ll> A;
  vector<vector<ll>> dp(100100, vector<ll>(10, 0));
  rep(i, N) {
    ll v;
    cin >> v;
    A.push_back(v);
  }
  ll x = A.front();
  A.pop_front();
  ll y = A.front();
  A.pop_front();
  dp[0][(x + y) % 10]++;
  dp[0][(x * y) % 10]++;
  int index = 0;

  while (!A.empty()) {
    ll v = A.front();
    A.pop_front();
    rep(i, 10) {
      if (dp[index][i] == 0) {
        continue;
      }
      dp[index + 1][(v + i) % 10] =
          (dp[index + 1][(v + i) % 10] + dp[index][i]) % (ll)998244353;

      dp[index + 1][(v * i) % 10] =
          (dp[index + 1][(v * i) % 10] + dp[index][i]) % (ll)998244353;
    }
    index++;
  }

  rep(i, 10) { cout << dp[index][i] << endl; }

  return 0;
}
