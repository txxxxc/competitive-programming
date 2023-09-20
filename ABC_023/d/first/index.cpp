#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF 1LL << 60
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
	int N; cin >> N;
	vector<ll> H(N);
	vector<ll> S(N);
	rep(i, N) cin >> H[i] >> S[i];
	// 得点をX以内にできるかという考え方にする
	// 何秒がデッドラインかについては以下の式で判定できる。
	// t = デッドラインの秒数
	// t = (X - H) / S
	
	ll ng = -1;
	ll ok = INF;
	while (ok - ng > 1) {
		vector<ll> t(N, 0);
		bool isOk = true;

		// 一旦中間値取る
		ll mid = (ok + ng) / 2;

		rep(i, N) {
			// tを算出する
			if (mid < H[i]) isOk = false;
			else t[i] = (mid - H[i]) / S[i];
		}

		sort(t.begin(), t.end());
		rep(i, N) if (t[i] < i) isOk = false;

		// 二分探索の更新
		if (isOk) ok = mid;
		else ng = mid;
	}

	cout << ok << endl;

	return 0;
}

