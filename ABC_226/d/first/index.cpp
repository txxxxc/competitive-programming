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

// GCDして割って保存
int GCD(int a, int b) {
  if (b == 0) {
    return a;
  }
  return GCD(b, a % b);
}

int main() {
  int N;
  cin >> N;
  set<P> st;
  vector<P> A(N);
  rep(i, N) {
    int x, y;
    cin >> x >> y;
    A[i] = make_pair(x, y);
  }

  rep(i, N) {
    rep(j, N) {
      if (i == j) {
        continue;
      }
      int v = 0;
      int x = A[i].first - A[j].first;
      int y = A[i].second - A[j].second;
      int absx = abs(x);
      int absy = abs(y);
      if (absx > absy) {
        v = GCD(absx, absy);
      } else {
        v = GCD(absy, absx);
      }
      st.insert(make_pair(x / v, y / v));
    }
  }

  cout << st.size() << endl;

  return 0;
}
