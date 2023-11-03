#include <bits/stdc++.h>
#include <numeric>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
  int N, X; cin >> N >> X;
  vector<int> list(N);
  rep(i, N) {
    cin >> list[i];
  }
  for (int i=1; i<N; i+=2) {
    if (i >= N) break;
    list[i]--; 
  } 

  int result = accumulate(list.begin(), list.end(), 0);
  if (X >= result) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
	return 0;
}

