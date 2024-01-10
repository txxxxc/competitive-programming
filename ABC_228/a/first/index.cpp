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
	int S, T, X; cin >> S >> T >> X;
	bool ans = false;
	if (S < T) {
		if (S < X && X < T) {
			ans = true;
		}	
	} else {
		if (S <= X && X < 24) {
			ans = true;
		}
		if (0 <= X && X < T) {
			ans = true;
		}
	}

	if (ans) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;
}
