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
  int n; ll C;
  cin >> n >> C;
  map<int,ll> events;
  rep(i,n) {
    int a, b, c;
    cin >> a >> b >> c;
    events[a] += c;
    events[b+1] -= c;
  }
  ll ans = 0;
  ll s = 0;
  int pre = 0;
  for (auto event : events) {
    ans += min(C,s)*(event.first-pre);
    s += event.second;
    pre = event.first;
  }
  cout << ans << endl;
  return 0;
}
