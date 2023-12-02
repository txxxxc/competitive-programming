#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
  ll N; cin >> N;
	ll answer = 0;
	vector<ll> A(N, 0); rep(i, N) cin >> A[i]; sort(A.begin(), A.end());
	vector<ll> B(N, 0); rep(i, N) cin >> B[i]; sort(B.begin(), B.end());
	vector<ll> C(N, 0); rep(i, N) cin >> C[i]; sort(C.begin(), C.end());

	rep(i, N) {
		// 中部を基準にして、上部は小さいやつ、下部は大きいやつで2分探索して加算する
		ll b = B[i];

		// 上部(bより小さいやつ)
		ll a_ng = A.size();
		ll a_ok = -1;

		// bより小さいやつ
		while(a_ng - a_ok > 1) {
			ll mid = (a_ok + a_ng) / 2;
			if (A[mid] < b) a_ok = mid;
			else a_ng = mid;
		}
		ll a = a_ok + 1;

		// 下部(bより大きいやつ)
		ll c_ng = -1;
		ll c_ok = A.size();

		while(c_ok - c_ng > 1) {
      ll mid = (c_ok + c_ng) / 2;
			if (C[mid] <= b) c_ng = mid;
			else c_ok = mid;
		}
		// bより大きいやつ
		ll c = A.size() - c_ok;

		// 上部でokのやつ*下部でokのやつでいけそう
		answer += a*c;
	}

	cout << answer << endl;
	return 0;
}

