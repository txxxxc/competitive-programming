#include <algorithm>
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
	ll N, K; cin >> N >> K;
	vector<vector<ll>> P(N, vector<ll>(3, 0)); rep(i, N) rep(j, 3) cin >> P[i][j];
	vector<ll> S(N);
	rep(i, N) {
		ll sum = 0;
		for(auto v: P[i]) {
			sum += v;
		}
		S[i] = sum;
	}
	// sortする方
	vector<ll> tmp = S;
	sort(tmp.begin(), tmp.end());
	rep(i, N) {
		ll v = S[i] + 300;
		auto it = upper_bound(tmp.begin(), tmp.end(), v);
		ll index  = it - tmp.begin() - 1;
		ll size = (ll)tmp.size();
		ll rank = size - index - 1;
		if (K >= rank+1) {
			cout << "Yes" << endl;
		} else {
			cout << "No" << endl;
		}
	}

	return 0;
}
