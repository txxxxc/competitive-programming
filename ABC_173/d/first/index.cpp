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
	ll ans = 0;
	vector<ll> A(N); rep(i, N) cin >> A[i];
	sort(A.rbegin(), A.rend());
	queue<ll> que;
	rep(i, N) {
		if (i==0) {
			que.push(A[i]);
			continue;
		}

		ll v = que.front();
		que.pop();
		ans += v;
		que.push(A[i]);
		que.push(A[i]);
	}
	cout << ans << endl;

	return 0;
}
