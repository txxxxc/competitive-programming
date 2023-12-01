#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

int main() {
	int N; cin >> N;
	int Q;
	ll s = 0;
	map<ll, ll> mp;
	vector<ll> A(N); 
	rep(i, N) {
		ll a; cin >> a;
		mp[a]++;
		s += a;
	}
  cin >> Q;
	rep(i, Q) {
		// 該当するBの数を持つ
		ll b, c; cin >> b >> c;
		ll cnt = mp[b];
		s -= cnt * b;
		// 置き換える
		mp[b] = 0;
		s += cnt*c;
		mp[c] += cnt;
		cout << s << endl;
	}

	return 0;
}

