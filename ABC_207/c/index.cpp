#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
  int N; cin >> N;
	vector<pair<ll,ll>> list(N);
	int answer = 0;
	// 全部2倍にする
	rep(i, N) {
		ll t, l, r; cin >> t >> l >> r;
		pair<ll, ll> p;
		if (t==1) {
			p.first = l*2;
			p.second = r*2;
		}
		// 2: rを1引く
		if (t==2) {
			p.first = l*2;
			p.second = r*2 - 1;
		}

		// 3: lを1引く
		if (t==3) {
			p.first = l*2 + 1;
			p.second = r*2;
		}

		// 4: l, rを1引く
		if (t==4) {
			p.first = l*2 + 1;
			p.second = r*2 - 1;
		}
		list[i] = p;
	}
  // 始点の最大
  // 終点の最小
	for (int i = 0; i<N; i++) {
		for (int j = i+1; j<N; j++) {
			ll s = max(list[i].first, list[j].first);
			ll e = min(list[i].second, list[j].second);
			if (s <= e) answer++;
		}
	}
	cout << answer << endl;
  return 0;
}
