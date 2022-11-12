#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
  int x, y;
  cin >> x >> y;
  if (x == y) {
    cout << x << endl;
    return 0;
  }
  cout << 3 - x - y << endl;
  return 0;
}
