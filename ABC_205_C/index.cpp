#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
  ll A, B, C;
  cin >> A >> B >> C;
  // A, Bが等しい時

  if (A == B) {
    cout << "=" << endl;
    return 0;
  }
  // Cが奇数の時
  if (C % 2 == 1) {
    A < B ? cout << "<" << endl : cout << ">" << endl;
    return 0;
  }

  // Cが偶数の時
  if (C % 2 == 0) {
    ll a = abs(A);
    ll b = abs(B);
    if (a == b) {
      cout << "=" << endl;
      return 0;
    }
    a < b ? cout << "<" << endl : cout << ">" << endl;
    return 0;
  }

  return 0;
}
