#include <bits/stdc++.h>
#include <queue>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using pll = pair<int, int>;

int main() {
	int Q; cin >> Q;
	ll offset = 0;
	priority_queue<ll, vector<ll>, greater<ll>> que;

	rep(i, Q) {
    ll type; cin >> type;
		if (type == 1) {
			ll x; cin >> x;
			que.push(x - offset);
		}

		if (type == 2) {
			ll x; cin >> x;
			offset += x;
		}

		if (type == 3) {
			ll x = que.top(); que.pop();
			cout << x + offset << endl;
		}
	}

	return 0;
}

