#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define rep(i, n) for (double i = 0; i < (double)(n); i++)
using ll = long long;

void plusMinus(vector<int> arr) {
  double zero = 0;
  double positive = 0;
  double negative = 0;
  double count = arr.size();
  for (auto value : arr) {
    if (value == 0) {
      zero += 1;
    }
    if (value > 0) {
      positive += 1;
    }
    if (value < 0) {
      negative += 1;
    }
  }
  cout << fixed;
  cout << setprecision(6) << positive / count << endl;
  cout << setprecision(6) << negative / count << endl;
  cout << setprecision(6) << zero / count << endl;
}

int main() {
  double N;
  cin >> N;
  vector<int> array(N);
  rep(i, N) { cin >> array[i]; }
  plusMinus(array);
  return 0;
}
