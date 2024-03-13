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
  int n;
  cin >> n;
  vector<ll> a(n);
  ll ans = 0;
  ll s = 0;
  rep(i, n) cin >> a[i];

  rep(i, n) {
    ans += (a[i] * s) % 1000000007;
    ans %= 1000000007;
    s += a[i];
    s %= 1000000007;
  }
  cout << ans % 1000000007 << endl;

  return 0;
}
