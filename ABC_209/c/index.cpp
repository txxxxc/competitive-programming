#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

ll value = pow(10, 9) + 7;
int main() {
  int N; cin >> N;
  ll answer = 1;
  vector<int> list(N);
  rep(i, N) {
    cin >> list[i];
  }
  sort(list.begin(), list.end());
  rep(i, N) {
    answer = answer * max(0, list[i] - i) % value;
  }
  cout << answer << endl; 
	return 0;
}

