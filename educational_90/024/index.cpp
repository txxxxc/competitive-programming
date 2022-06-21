#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
	int N, K; cin >> N >> K;
	vector<int> A(N), B(N);
	rep(i, N) {
		cin >> A[i];
	}
	rep(i, N) {
		cin >> B[i];
	}

	ll diff = 0;
	rep(i, N) {
		diff += abs(A[i]-B[i]);
	}

	if (diff <= K && (K-diff) % 2 == 0) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}

	return 0;
}

