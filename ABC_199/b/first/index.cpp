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
  int answer = 0;
  vector<int> a(n);
  vector<int> b(n);
  rep(i, n) cin >> a[i];
  rep(i, n) cin >> b[i];
  for (int i = 1; i <= 1000; i++) {
    bool ok = true;
    rep(j, n) {
      if (a[j] <= i && i <= b[j]) continue;
      else ok = false;
    }
    if (ok) answer++;
  }
  cout << answer << endl;
  return 0; 
}
