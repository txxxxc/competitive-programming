#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  if (a == b && b == c) {
    cout << a << endl;
    return 0;
  }
  if (a == b) {
    cout << c << endl;
    return 0;
  }
  if (a == c) {
    cout << b << endl;
    return 0;
  }
  if (b == c) {
    cout << a << endl;
    return 0;
  }
  cout << 0 << endl;
  return 0;
}
