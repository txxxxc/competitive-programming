#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;


ll func(ll i) {
	return i * i * i * i * i;
}

int main() {
	ll X; cin >> X;
	for (ll i = -129; i < 129; i++) {
		for (ll j = -129; j < 129; j++) {
			ll a = func(i);
			ll b = func(j);
			if (a - b == X) {
				cout << i << " " << j << endl;
				return 0;
			}
		}
	}

	return 0;
}
