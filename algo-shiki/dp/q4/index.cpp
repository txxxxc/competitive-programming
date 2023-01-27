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
  if (N == 2) {
    cout << 2 << endl;
    return 0;
  }
  if (N == 3) {
    cout << 4 << endl;
    return 0;
  }

  vector<int> list(N);
  list[0] = 1;
  list[1] = 2;
  list[2] = 4;
  for (int i = 3; i < N; i++) {
    list[i] = list[i - 1] + list[i - 2] + list[i - 3];
  }
  cout << list[N - 1] << endl;
  return 0;
}
