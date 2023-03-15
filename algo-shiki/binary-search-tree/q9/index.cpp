#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
  long long N, K; cin >> N >> K;

  long long count = 0;
  for (int i=0; i<N; i++) {
    count += min(N, K/(i+1));
  }

  cout << count << endl;
	return 0;
}

