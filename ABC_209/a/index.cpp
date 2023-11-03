#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
  int A, B; cin >> A >> B;
  if (B < A) {
    cout << 0 << endl;
    return 0;
  }
  if (B == A) {
    cout << 1 << endl;
    return 0;
  }
  int diff = B - A;
  cout << diff + 1 << endl;
	return 0;
}

