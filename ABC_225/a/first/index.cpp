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
	string S; cin >> S;
	int mx = 0;
	map<char, int> mp;
	rep(i, S.size()) {
		mp[S[i]]++;
		mx = max(mp[S[i]], mx);
	}

	if (mx == 3) {
		cout << 1 << endl;
	} else if(mx == 2) {
		cout << 3 << endl;
	} else if(mx == 1) {
		cout << 6 << endl;
	}

	return 0;
}

