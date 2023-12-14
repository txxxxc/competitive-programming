#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

int N; 
vector<bool> state;
vector<ll> T;
Graph A;
ll ans = 0;

void func(int n) {
	if (state[n]) return;
	state[n] = true;
	// 時間を足す
  ans += T[n];
	// 依存するやつを呼び出す
	for (auto v: A[n]) {
		func(v);
	}
}

int main() {
	cin >> N;
	T.resize(N+1);
	A.resize(N+1);
	state.resize(N+1, false);
	// 一旦初期データを入れる
	for(int i=1; i<=N; i++) {
		ll t; cin >> t;
		T[i] = t;
		int K; cin >> K;
		rep(j, K) {
			int a; cin >> a;
			A[i].push_back(a);
		}
	}

	// 再帰でやる
	func(N);
	cout << ans << endl;

	return 0;
}

