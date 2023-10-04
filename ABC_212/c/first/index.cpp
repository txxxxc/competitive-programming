#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
	int N, M; cin >> N >> M;
	vector<int> A(N, 0), B(M, 0);
	rep(i, N) cin >> A[i];
	rep(i, M) cin >> B[i];
	sort(A.begin(), A.end());
	sort(B.begin(), B.end());
	int answer = 1000000000;

	// Aの要素を取るN
	// - Bの要素で2分探索
	rep(i, N) {
		int ng = -1;
		int ok = B.size() - 1;
		while(ok - ng > 1) {
			int mid = (ng + ok) / 2;
			if (A[i] <= B[mid]) ok = mid;
			else ng = mid;
		}
		
		int v = 100000000;
		if (ng != -1) {
			int v1 = abs(A[i] - B[ng]);
			int v2 = abs(A[i] - B[ok]);
			v = min(v1, v2);
		} else {
			v = abs(A[i] - B[ok]);
		}

		answer = min(v, answer);
	}

	cout << answer << endl;

	return 0;
}

