#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
	ll N, K; cin >> N >> K;
	vector<ll> A(N); rep(i, N) cin >> A[i];
	ll answer = 0;
	sort(A.begin(), A.end());
	rep(i, N) {
		ll left = 0, right = N;
		while (left != right) {
			ll mid = (left + right) / 2;
			if (A[mid] >= K - A[i]) right = mid;
			else left = mid+1;
		}
		answer += (N - left);
	}
	cout << answer << endl;
	return 0;
}

