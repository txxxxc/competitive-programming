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
	ll N; cin >> N;
	set<ll> ans;
	for(ll i = 1; i*i <= N; i++) {
		if (N % i == 0) {
			ans.insert(i);
			ans.insert(N/i);
		}
	}
	for (auto v: ans) cout << v << endl;
	return 0;
}

