#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
  int P;
  cin >> P;
  int answer = 0;
  vector<int> list{3628800, 362880, 40320, 5040, 720, 120, 24, 6, 2, 1};
  for (auto value : list) {
    if (P < value) {
      continue;
    }
    int tmp = P / value;
    if (tmp > 100) {
      P -= value * 100;
      answer += 100;
    } else {
      P -= value * tmp;
      answer += tmp;
    }
    if (P == 0) {
      break;
    }
  }
  cout << answer << endl;
  return 0;
}
