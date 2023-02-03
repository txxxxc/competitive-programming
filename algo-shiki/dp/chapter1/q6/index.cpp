#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
	int N, M; cin >> N >> M;
	vector<bool> result(N+1, false);
	vector<int> D(M, 0); rep(i, M) cin >> D[i];
	result[0] = true;

	rep(i, N) {
		if (!result[i]) { continue; }
		rep(j, M) {
			if (i+D[j] > N) { continue; }
			result[i+D[j]] = true;
			cout << endl;
		}
	}
	if (result[N]) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}
	return 0;
}
