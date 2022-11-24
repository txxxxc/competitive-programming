#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

ll nc2(ll n) { return n * (n - 1) / 2; }

int main() {
  int N;
  cin >> N;
  map<ll, ll> table;
  ll count = 0;
  rep(i, N) {
    ll j;
    cin >> j;
    table[j] += 1;
  }

  for (auto item : table) {
    if (item.second == 1) {
      continue;
    }
    count += nc2(item.second);
  }

  cout << nc2(N) - count << endl;
  return 0;
}
