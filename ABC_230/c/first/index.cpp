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
	ll n, a, b;
	cin >> n >> a >> b;
	ll p, q, r, s; cin >> p >> q >> r >> s;
	int h = q-p+1, w = s-r+1;
	vector<string> ans(h, string(w, '.'));
	rep(i, h) rep(j, w) {
		ll x = p+i, y = r+j;
		if (x-y == a-b || x+y == a+b) ans[i][j] = '#';
	}
	rep(i, h) cout << ans[i] << endl;

	return 0;
}
