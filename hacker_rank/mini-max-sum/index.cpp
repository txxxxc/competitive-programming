#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

void miniMaxSum(vector<int> arr) {
  sort(arr.begin(), arr.end());
  long long min = arr[0];
  long long max = arr[arr.size() - 1];
  long long sum = 0;
  for (auto v : arr) {
    sum += v;
  }

  cout << sum - max << " " << sum - min << endl;
}

int main() {
  double N;
  cin >> N;
  vector<int> arr(N);
  rep(i, N) { cin >> arr[i]; }
  miniMaxSum(arr);

  return 0;
}
