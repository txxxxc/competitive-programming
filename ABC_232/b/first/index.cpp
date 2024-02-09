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
	int size = S.size();
	vector<int> r(size, 0);
	rep(i, size) {
		r[i] = T[i] - S[i];
		if (r[i] < 0) {
			r[i] += 26;
		}
	}

	bool answer = true;
	for (int i = 1; i<size; i++) {
		if (r[i] != r[i-1]) {
			answer = false;
		}
	}
  
	if (answer) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;
}
