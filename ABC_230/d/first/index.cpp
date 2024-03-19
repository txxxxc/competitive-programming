#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL << 62) - (1LL << 31))
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

// 区間をならす
// Dの値まで消し去る
// 数字を出す
int main() { 
  int n, d;
  cin >> n >> d;
  vector<P> p(n);
  rep(i,n) cin >> p[i].second >> p[i].first;
  sort(p.begin(), p.end());
  int ans = 0, x = -1;
  for (auto [r,l] : p) {
    if (l <= x) continue;
    ++ans;
    x = r+d-1;
  }
  cout << ans << endl;
  return 0; 
}
