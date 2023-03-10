#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

ll calc(ll v) {
	return v*(v+1) / 2;
}

int main() {
	int N; cin >> N;
	vector<ll> X(N); rep(i, N) cin >> X[i];
	rep(i, N) {
		ll x = X[i];
		ll left = 0, right = 2e9;
		while (left != right) {
			ll mid = (left + right) / 2;
			if (calc(mid) >= x) right = mid;
			else left = mid + 1;
		}
		cout << left << endl;
	}
	return 0;
}

