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
  int n, q; cin >> n >> q;
  unordered_map<int, vector<int>> mp;
  rep(i, n) {
    int a; cin >> a;
    mp[a].push_back(i);
  }
  rep(i, q) {
    int x, k; cin >> x >> k;
    if (mp[x].size() < k) {
      cout << "-1" << endl;
    } else {
      cout << mp[x][k-1]+1 << endl;
    }
  }

  return 0; 
}
