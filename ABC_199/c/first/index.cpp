#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL << 62) - (1LL << 31))
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

// 前半と後半でvectorを分ける
// 2のクエリは前半と後半の値を入れ替える

int main() { 
  int n; cin >> n;
  vector<char> a(n, ' ');
  vector<char> b(n, ' ');
  string s; cin >> s;
  rep(i, n*2) {
    if (i < n) a[i] = s[i];
    else b[i-n] = s[i];
  }
  int q; cin >> q;
  rep(i, q) {
    int t; cin >> t;
    int c, d; cin >> c >> d;
    c--; d--;
    if (t == 1) {
      if (c > n-1) {
        swap(b[c-n], b[d-n]);
      } else if (d < n) {
        swap(a[c], a[d]);
      } else {
        swap(a[c], b[d-n]);
      }
    }
    if (t == 2) {
      swap(a, b);
    }
  }
  rep(i, n) cout << a[i];
  rep(i, n) cout << b[i];
  return 0; 
}
