#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

ll func(ll v) {
	return v / 2;
}

int main() {
	int n, m; cin >> n >> m;
	ll answer = 0;
	priority_queue<ll> q;
	rep(i, n) {
		ll v; cin >> v;
	  q.push(v);
	}
	rep(i, m) {
		ll max = q.top();
		q.pop();
		max /= 2;
		q.push(max);
	}
	while (!q.empty()) {
		ll a = q.top();
		q.pop();
		answer += a;
	}
	cout << answer << endl;
	

	return 0;
}
