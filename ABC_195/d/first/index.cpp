#include <bits/stdc++.h>
#include <utility>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL << 62) - (1LL << 31))
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

vector<int> erase_vec(vector<int> v, int first, int last) {
  first--; last--;
  auto left = v.begin() + first;
  v.erase(left, left + (last-first+1));
  return v;
}

int main() { 
  int n, m, q; cin >> n >> m >> q;
  vector<P> wv(n);
  vector<int> x(m);
  rep(i, n) {
    int w, v; cin >> w >> v;
    wv[i] = make_pair(w, v);
  }
  rep(i, m) cin >> x[i];
  // first要素は昇順、second要素は降順でソート
  sort(wv.begin(), wv.end(), [](const std::pair<int, int>& a, const std::pair<int, int>& b) {
      if (a.second != b.second) {
          return a.second > b.second;
      } else {
          return a.first < b.first;
      }
  });
  rep(i, q) {
    ll answer = 0;
    int a, b; cin >> a >> b;
    vector<int> new_v = erase_vec(x, a, b);
    sort(new_v.begin(), new_v.end());
    rep(j, n) {
      int wv_size = new_v.size();
      if (wv_size == 0) break;
      int weight = wv[j].first;
      int value = wv[j].second;
      auto iter = lower_bound(new_v.begin(), new_v.end(), weight);
      if (iter == new_v.end()) continue;
      int index = iter - new_v.begin();
      new_v.erase(new_v.begin() + index);
      answer += value;
    }
    cout << answer << endl;
  }

  return 0; 
}
