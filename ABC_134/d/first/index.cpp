#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL << 62) - (1LL << 31))
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

int n;
int a[300300];
int c[300300];
int d[300300];
vector<int> r;

void func(int v, int b) {
  if (c[v] % 2 == b) return;
  d[v] = 1;
  r.push_back(v);
  for (int i = 1; i*i <= v; i++) {
    if (v % i == 0) {
      int x = v / i;
      int y = i;
      if (x == y) {
        c[x]++;
      } else {
        c[x]++;
        c[y]++;
      }
    }
  }
  return;
}

int main() { 
  cin >> n;
  for (int i = 1; i <= n; i++){
    cin >> a[i];
  }
  for (int i = n; i >= 1; i--) {
    func(i, a[i]);
  }
  bool isOk = true;
  for (int i = 1; i <= n; i++){
    if (c[i] % 2 != a[i]) {
      isOk = false;
      break;
    }
  }
  if (isOk) {
    int size = r.size();
    cout << size << endl;
    rep(i, size) cout << r[i] << " ";
  } else cout << -1 << endl;

  return 0; 
}
