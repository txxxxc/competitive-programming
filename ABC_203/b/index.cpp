#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
  int N, K;
  cin >> N >> K;
  int answer = 0;
  for (int i = 1; i <= N; i++) {
    for (int j = 1; j <= K; j++) {
      answer += (100 * i + j);
    }
  }
  cout << answer << endl;
  return 0;
}
