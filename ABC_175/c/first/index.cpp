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
	ll X, K, D; cin >> X >> K >> D;
	X = abs(X);
	// 0に到達できない場合
	ll e = X/D;
	if (e >= K) {
		cout << X - K*D << endl;
		return 0;
	}

	X -= e*D;
	K -= e;

	if (K % 2 == 0) cout << X << endl;
	else cout << abs(X-D) << endl;

	return 0;
}

