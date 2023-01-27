#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
  int N;
  cin >> N;
  if (N == 1) {
    cout << 1 << endl;
    return 0;
  }
  vector<int> list(N + 1);
  rep(i, N) cin >> list[i];
  list[0] = 1;
  list[1] = 1;
  for (int i = 2; i < N + 1; i++) {
    list[i] = list[i - 1] + list[i - 2];
  }

  cout << list[N] << endl;
  return 0;
}
