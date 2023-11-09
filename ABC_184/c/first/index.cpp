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
	ll a, b, c, d; cin >> a >> b >> c >> d;
	ll p = abs(c-a), q = abs(d - b);
	if (p == 0 && q == 0) {
		cout << 0 << endl;
	} else if (p == q || p+q <= 3) {
		cout << 1 << endl;
	} else if ((p+q) % 2 == 0 || p+q <= 6 || abs(p-q) <= 3) {
		cout << 2 << endl;
	} else {
		cout << 3 << endl;
	}
	return 0;
}

