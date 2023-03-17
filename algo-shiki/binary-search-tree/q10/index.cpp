#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

// 表にK以下の数字が何個あるかを調べる関数
ll calc(ll N, ll K) {
	ll answer = 0;
	rep(i, N) { answer += min(N, K/(i+1)); }
	return answer;
}

int main() {
	ll N, X; cin >> N >> X;
	ll left = 0, right = N*N;
	while (left != right) {
		ll mid = (left+right) / 2;
		ll v = calc(N, mid);
		if (X <= v) {
			right = mid;
		} else {
			left = mid + 1;
		}
	}
	cout << left << endl;
	return 0;
}

