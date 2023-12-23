#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

// x軸に平行：yの値が一緒
// y軸に平行：xの値が一緒

int main() {
	int N; cin >> N;
	ll answer = 0;
	vector<P> a(N);
	map<P, ll> mp;
	rep(i, N) {
		int x, y; cin >> x >> y;
		a[i] = make_pair(x, y);
	}

	for(int i = 0; i < N; i++) {
		for(int j = i+1; j < N; j++) {
			// yのstartとendの数で集計したい
			int x1 = a[i].first, y1 = a[i].second;
			int x2 = a[j].first, y2 = a[j].second;
			if (x1 != x2) continue;
			if (y1 > y2) swap(y1, y2);
			P p = make_pair(y1, y2);
			mp[p]++;
		}
	}
	for (auto v: mp) {
		ll vs = v.second;
		answer += vs * (vs-1) / 2;
	}
	cout << answer << endl;

	return 0;
}

