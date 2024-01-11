#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
using ll = long long;
using P = pair<ll, ll>;
using Graph = vector<vector<int>>;

int main() {
	int N, W; cin >> N >> W;
	vector<P> S(N);
	rep(i, N) {
		ll a, b; cin >> a >> b;
		S[i] = make_pair(a, b);
	}
	sort(S.rbegin(), S.rend());
	ll answer = 0;
	ll count = 0;
	rep(i, N) {
		P p = S[i];
		ll a, b; a = p.first; b = p.second;
		if (count + b > W) {
			answer = answer + (W-count) * a;
			break;
		}
		answer += a*b;
		count += b;
	}
	cout << answer << endl;
	return 0;
}
