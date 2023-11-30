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
	int X; cin >> X;
	bool answer = false;
	if (X % 100 == 0) {
		answer = true;
	} else {
		answer = false;
	}
	if (X == 0) answer = false;

	if (answer) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}

	return 0;
}

