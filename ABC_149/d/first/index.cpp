#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

// aが自分, bが相手
bool func(char a, char b) {
	if (a == 'r') {
		if (b == 'r' || b == 'p') return false;
		else return true;
	}
	if (a == 's') {
		if (b == 's' || b == 'r') return false;
		else return true;
	}
	if (a == 'p') {
		if (b == 'p' || b == 's') return false;
		else return true;
	}
	cout << "Not reachable" << endl;
	return false;
}

int main() {
	int N, K; cin >> N >> K;
	ll R, S, P; cin >> R >> S >> P;
	string T; cin >> T;
  vector<char> t(N); rep(i, N) t[i] = T[i];
	vector<vector<ll>> dp(N+1, vector<ll>(3, 0));
	for (int k = 0; k<K; k++) {
		for (int i = k; i<=N; i = i + K) {
			for (int j = 0; j < 3; j++) {
				if (i == 0) continue;
				// r
				if (j == 0) {
					if (func('r', t[i-1])) {
						if (i - K >= 0) {
							dp[i][0] = max(dp[i-K][1], dp[i-K][2]);
							dp[i][0] += R;
						} else {
							dp[i][0] = R;
						}
					} else {
						if (i - K >= 0) {
							dp[i][0] = max(dp[i-K][1], dp[i-K][2]);
						}
					}
				}
				
				// s
				if (j == 1) {
					if (func('s', t[i-1])) {
						if (i - K >= 0) {
							dp[i][1] = max(dp[i-K][0], dp[i-K][2]);
							dp[i][1] += S;
						} else {
							dp[i][1] = S;
						}
					} else {
						if (i - K >= 0) {
							dp[i][1] = max(dp[i-K][0], dp[i-K][2]);
						}
					}
				}

				// p
				if (j == 2) {
					if (func('p', t[i-1])) {
						if (i - K >= 0) {
							dp[i][2] = max(dp[i-K][0], dp[i-K][1]);
							dp[i][2] += P;
						} else {
							dp[i][2] = P;
						}
					} else {
						if (i - K >= 0) {
							dp[i][2] = max(dp[i-K][0], dp[i-K][1]);
						}
					}
				}
			}
		}
	}

	ll answer = 0;
	rep(i, K) {
		ll v = 0;
		rep(j, 3) {
			v = max(v, dp[N-i][j]);
		}
		answer += v;
	}

	cout << answer << endl;

	return 0;
}
