#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
	int N; cin >> N;
	vector<ll> S(N);
	vector<ll> T(N);
	rep(i, N) { cin >> S[i]; }
	rep(i, N) { cin >> T[i]; }
	rep(i, N) {
		T[(i+1) % N] = min(T[i] + S[i], T[(i+1) % N]);
	}
	rep(i, N) {
		T[(i+1) % N] = min(T[i] + S[i], T[(i+1) % N]);
	}
	rep(i, N) {
		cout << T[i] << endl;
	}

	return 0;
}

