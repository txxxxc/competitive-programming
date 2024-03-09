#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

ll gcd(ll a, ll b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}

vector<ll> pf(ll a) {
	vector<ll> vec;
	for (ll i = 2; i*i <= a; i++) {
		if (a%i) continue;
		while(a%i == 0) {
			a /= i;
		}
		vec.emplace_back(a);
	}
	if (a != 1) vec.emplace_back(a);

	return vec;
}

int main() {
	ll a, b; cin >> a >> b;
	ll g = gcd(a, b);
	vector<ll> f = pf(g);
	cout << f.size() + 1 << endl;
	return 0;
}
