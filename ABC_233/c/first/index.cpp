#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

// 65536
int main() {
	ll N, X; cin >> N >> X;
	// 値&回数
	map<ll, ll> mp;
	vector<map<ll, ll>> dp(N+1, map<ll, ll>());
	dp[0][X] = 1;
	rep(i, N) {
		ll k; cin >> k;
		vector<ll> h;
		rep(i, k) {
			int a; cin>> a;
			h.push_back(a);
		}
		for (ll v: h) {
			for (auto vv: dp[i]) {
				if (vv.first == 1) {
					debug(vv.first % v);
				}
				if (vv.first % v > 0) continue;
				dp[i+1][vv.first / v]  += vv.second;
			}
		}
	}
	cout << dp[N][1] << endl;
	return 0;
}
