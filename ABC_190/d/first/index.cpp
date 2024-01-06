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
  ll N;
  cin >> N;
  ll nn = N * 2;
  int ans = 0;
  for (ll x = 1; x * x <= nn; x++) {
    if (nn % x) {
      continue;
    }
    ll y = nn / x;
    if (abs(nn / x - x + 1) % 2 == 0) {
      ans++;
    }
    if (y != x && abs(nn / y - y + 1) % 2 == 0) {
      ans++;
    }
  }
  cout << ans << endl;

  return 0;
}
