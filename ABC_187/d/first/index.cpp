#include <bits/stdc++.h>
#include <utility>
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
	int answer = 0;
	vector<ll> A(N); ll asum = 0;
	vector<ll> B(N); ll bsum = 0;
	// 影響力
	vector<pair<ll,ll>> C(N);
	rep(i, N) {
		ll a, b; cin >> a >> b;
		asum += a;
		C[i] = make_pair(a+a+b, b);
	}
	sort(C.rbegin(), C.rend());
  rep(i, N) {
		ll a = (C[i].first - C[i].second) / 2, b = C[i].second;
		asum -= a;
		bsum += a + b;
		answer++;
		if (asum < bsum) break;
	}
	cout << answer << endl;

	return 0;
}

