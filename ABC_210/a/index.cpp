#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
  ll N, A, X, Y; cin >> N >> A >> X >> Y;
  if (N <= A) {
    cout << X*N << endl;
  } else {
    cout << X*A + Y*(N-A) << endl;
  }
	return 0;
}

