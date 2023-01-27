#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> list(N);
  rep(i, N) cin >> list[i];
  vector<int> answer(N, 1000000);
  answer[0] = 0;
  for (int i = 1; i < N; i++) {
    for (int j = 1; j <= M; j++) {
      if (i - j < 0)
        continue;
      int tmp = answer[i - j] + list[i] * j;
      answer[i] = min(answer[i], tmp);
    }
  }
  cout << answer[N - 1] << endl;
  return 0;
}
