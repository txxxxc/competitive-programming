#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

ll l[200200];
ll A[200200];
map<int, int> mp;

ll func(ll n) {
	return n * (n-1) / 2;
}

int main() {
	int N; cin >> N;
	ll result = 0;

	rep(i, N) {
		ll v; cin >> v;
		A[i] = v;
		mp[v]++;
	}

	for(auto v: mp) {
		ll vv = v.second;
		ll vvv = (ll)func(vv);
		result += vvv;
    l[v.first] = vvv;
	}

	rep(i, N) {
		ll v = A[i];
		ll vv = l[v] - func(mp[v]-1);
		cout << result - vv << endl;
	}

	return 0;
}

