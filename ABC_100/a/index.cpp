#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
  int a, b;
  cin >> a >> b;
  int c = a + b;
  if (c > 16) {
    cout << ":(" << endl;
    return 0;
  }
  if (a > 8 || b > 8) {
    cout << ":(" << endl;
    return 0;
  }
  cout << "Yay!" << endl;
  return 0;
}
