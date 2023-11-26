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
	int N; cin >> N;
	vector<ll> a(N); rep(i, N) cin >> a[i];
	// lrの中でminの合計が答え
	// lrはN^2 / 2でいけるのでぎり間に合う
	ll answer = 0;
	for (ll l = 0; l<N; l++) {
		ll mv = a[l];
		for (ll r = l; r<N; r++) {
      mv = min(mv, a[r]);
			answer = max(answer, mv * (r-l + 1));
		}
	}
	cout << answer << endl;

	return 0;
}

