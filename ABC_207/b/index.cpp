#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
  ll a, b, c, d;
  cin >> a >> b >> c >> d;
  ll count = 0;
  if (b >= c * d) {
    cout << -1 << endl;
    return 0;
  }

  while (true) {
    ll blue = a + b * count;
    ll red = c * d * count;
    if (blue <= red) {
      cout << count << endl;
      return 0;
    }
    count++;
  }
  return 0;
}
