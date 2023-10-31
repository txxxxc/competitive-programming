#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
  int N; cin >> N;
  string S; cin >> S;
  int count = 0;
  int size = S.size();
  rep (i, size) {
    if (S[i] == '1') { 
      count = i; 
      break;
    }
  }
  if (count % 2 == 0) {
    cout << "Takahashi" << endl;
  } else {
    cout << "Aoki" << endl;
  }
	return 0;
}

