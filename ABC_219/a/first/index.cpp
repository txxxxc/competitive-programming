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
	if (X >= 0 && X < 40) {
		cout << 40 - X << endl;
	} else if (X >= 40 && X < 70) {
		cout << 70 - X << endl;
	} else if (X >= 70 && X < 90){
		cout << 90 - X << endl;
	} else {
		cout << "expert" << endl;
	}

	return 0;
}

