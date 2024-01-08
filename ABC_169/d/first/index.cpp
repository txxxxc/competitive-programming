#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

vector<pair<ll, ll>> func(ll N) {
	vector<pair<ll, ll>> s;
	for (ll i = 2; i * i <= N; i++) {
		if (N % i) continue;
    pair<ll, ll> p = make_pair(i, 0);
		while (N % i == 0) {
			p.second++;
			N /= i;
		}
		s.push_back(p);
	}
	if (N != 1) { s.push_back(make_pair(N, 1)); }
	return s;
}

int main() {
	ll N; cin >> N;
	ll ans = 0;
	
	auto s = func(N);
	for (auto v: s) {
		ll current = 1;
		ll cnt = v.second;
		while (cnt >= current) {
			cnt -= current;
			current++;
			ans++;
		}
	}

	cout << ans << endl;

	return 0;
}

