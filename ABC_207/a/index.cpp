#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
  vector<int> list(3);
  rep(i, 3) { cin >> list[i]; }
  sort(list.begin(), list.end());
  cout << list[2] + list[1] << endl;
  return 0;
}
