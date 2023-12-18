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
	int n, q; cin >> n >> q;
	vector<ll> a(n); rep(i, n) cin >> a[i];
	vector<ll> c(n); rep(i, n) c[i] = a[i] - i - 1;
	rep(qi, q) {
		ll k; cin >> k;
		int r = lower_bound(c.begin(), c.end(), k) - c.begin();
		ll answer;
		if (r == 0) {
			answer = k;
		} else {
			answer = a[r-1] + (k - c[r-1]);
		}
		cout << answer << endl;
	}

	return 0;
}

