#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
  int N, K;
  cin >> N >> K;
  vector<int> list(N);

  rep(i, N) {
    if (list[i] == 0) {
      cout << N << endl;
    }
  }

  int answer = 0;
  int right = 0;
  ll mul = 1;
  for (int left = 0; left < N; left++) {
    while (right < N && mul * list[right] <= K) {
      mul *= list[right];
      right++;
    }

    answer = max(answer, right - left);
    if (left == right)
      right++;
    else
      mul /= list[left];
  }
  cout << answer << endl;
  return 0;
}
