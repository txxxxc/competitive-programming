#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
  double a, b;
  double i = 100;
  cin >> a >> b;
  if (a == 0) {
    cout << a << endl;
    return 0;
  }
  cout << (b / i) * a;
  return 0;
}
