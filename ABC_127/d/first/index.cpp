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
  ll n, m; cin >> n >> m;
  priority_queue<ll, vector<ll>, greater<ll>> pq;
  rep(i, n) {
    ll v; cin >> v;
    pq.push(v);
  }
  vector<pair<ll,ll>> ps(m);
  rep(i, m) {
    ll b, c ; cin >> b >> c ;
    ps[i] = make_pair(c, b);
  }
  sort(ps.rbegin(), ps.rend());
  rep(i, m) {
    pair<ll, ll> p = ps[i];
    ll c = p.second;
    ll v = p.first;
    rep(j, c) {
      ll vv = pq.top();
      if (vv < v) {
        pq.pop();
        pq.push(v);
      } else {
        break;
      }
    }
  }
  ll ans = 0;
  while (!pq.empty()) {
    ll v = pq.top();
    ans += v;
    pq.pop();
  }
  cout << ans << endl;
  return 0; 
}
