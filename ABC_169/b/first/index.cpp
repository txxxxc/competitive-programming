#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

// 10^9 * 10^9 = 10^18
int main() {
	ll N; cin >> N;
	ll ans = 1;
	ll max = 1e18L;
	ll current_max = max;
	vector<ll> A(N);
	rep(i, N) {
		ll a; cin >> a;
		A[i] = a;
		if (A[i] == 0) {
			cout << 0 << endl;
			return 0;
		}
	}
	rep(i, N) {
		if (current_max < A[i]) {
			cout << "-1" << endl;
			return 0;
		}
		ans *= A[i];
		current_max = current_max / A[i];
		if (ans <= -1 || ans > max) {
			cout << "-1" << endl;
			return 0;
		}
	}
	cout << ans << endl;

	return 0;
}
