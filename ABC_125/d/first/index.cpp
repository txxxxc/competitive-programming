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
  vector<ll> a(n, 0);
  rep(i, n) cin >> a[i];
  int minus = 0;
  int plus = 0;
  bool zero_found = false;
  rep(i, n) {
    if (a[i] == 0) zero_found = true;
    if (a[i] >= 0) {
      plus++;
    } else {
      minus++;
    }
  }
  ll ans = 0;
  ll min_v = INF;
  if (minus % 2 == 0 || zero_found) {
    rep(i, n) ans += abs(a[i]);
  } else {
    rep(i, n) {
      ll v = abs(a[i]);
      ans += v;
      min_v = min(min_v, v); 
    }
    ans -= min_v * 2;
  }
  cout << ans << endl;

  return 0; 
}
