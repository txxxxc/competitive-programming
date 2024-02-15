#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

ll f(int x) {
	return x * x + 2 * x + 3;
}

int main() {
	ll t; cin >> t;
	cout << f(f(f(t)+t) + f(f(t))) << endl;

	return 0;
}
