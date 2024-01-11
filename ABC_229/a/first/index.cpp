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
	vector<vector<bool>> r(2, vector<bool>(2, false));
	vector<vector<char>> map(2, vector<char>(2));
	string S1, S2; cin >> S1 >> S2;
	int count = 0;
	map[0][0] = S1[0];
	map[0][1] = S1[1];
	map[1][0] = S2[0];
	map[1][1] = S2[1];
	for(auto v: S1) if (v == '#') count++;
	for(auto v: S2) if (v == '#') count++;

	if (count == 4) {
		cout << "Yes" << endl;
		return 0;
	}
	if (count == 3) {
		cout << "Yes" << endl;
		return 0;
	}

	if (count == 2) {
		if (map[0][0] == '.' && map[1][1] == '.') {
			cout << "No" << endl;
			return 0;
		}
		if (map[0][1] == '.' && map[1][0] == '.') {
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;

	return 0;
}
