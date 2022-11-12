#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
  int N;
  int answer = 0;
  cin >> N;
  rep(i, N) {
    int a;
    cin >> a;
    if (a - 10 > 0) {
      answer += a - 10;
    }
  }
  cout << answer << endl;
  return 0;
}
