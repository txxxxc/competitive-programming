#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
  ll N, K;
  cin >> N >> K;
  vector<ll> citizens(N);
  vector<ll> numbers(N);
  rep(i, N) {
    int number;
    cin >> number;
    citizens[i] = number;
    numbers[i] = number;
  }
  sort(numbers.begin(), numbers.end());
  ll base = K / N;
  ll remains = K % N;
  int border;
  if (remains == 0) {
    border = 0;
  } else {
    border = numbers[remains - 1];
  }
  for (auto c : citizens) {
    if (c <= border) {
      cout << base + 1 << endl;
    } else {
      cout << base << endl;
    }
  }
  return 0;
}
