#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

int main() {
	string S, T; cin >> S >> T;
  if (S == T) {
	cout << "Yes" << endl;
	return 0;
  }
  int size = (int)S.size();
  for(int i = 1; i < size; i++) 
    if (S[i] == T[i-1] && S[i-1] == T[i]) {
      vector<char> list = {S[i], S[i-1]};
      S[i] = list[1];
      S[i-1] = list[0];
	if (S == T) {
		cout << "Yes" << endl;
		return 0;
	 }
		}
}

	cout << "No" << endl;
	return 0;
}

