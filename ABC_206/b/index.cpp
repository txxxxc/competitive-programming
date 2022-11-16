#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
  int N;
  cin >> N;
  int answer = 0;
  if (N == 1) {
    cout << 1 << endl;
    return 0;
  }
  for (int i = 1; i < N; i++) {
    answer += i;
    if (answer >= N) {
      cout << i << endl;
      return 0;
    }
  }
  return 0;
}
