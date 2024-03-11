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
  ll n, k; cin >> n >> k;
  ll offset = 0;
  ll answer = 0;
  vector<ll> a(n), b(n);
  rep(i, n) {
    ll v; cin >> v;
    if (i == 0) {
      a[i] = v;
      b[i] = v;
    } else {
      a[i] = v;
      b[i] = b[i-1] + v;
    }
  }
  rep(i, n) {
    auto iter = lower_bound(b.begin(), b.end(), k+offset);
    ll index = iter - b.begin();
    offset += a[i];
    answer += n - index;
  }
  cout << answer << endl;
  return 0; 
}
