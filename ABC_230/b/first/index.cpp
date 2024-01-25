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
  string T = "";
	rep(i, 20) T += "oxx";
	string S; cin >> S;
	bool result = false;
	int size = S.size();
	string now = "";
	int l = 0;
  int r = size;
	rep(i, size) {
		now += T[i];
	}

	rep(i, 20) {
		if (now == S) {
      result = true;
			break;
		}
		l++;
		r++;
		now = "";
		for(int j = l; j < r; j++) {
			now += T[j];
		}
	}


	if (result) cout << "Yes" << endl;
	else cout << "No" << endl;


	return 0;
}
