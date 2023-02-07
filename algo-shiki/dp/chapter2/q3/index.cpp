#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
	int N; cin >> N;
	vector<vector<int>> A(N, vector<int>(3));
	rep(i, N) {
		rep(j, 3) {
			cin >> A[i][j];
		}
	}
	vector<vector<int>> result(N, vector<int>(3));
	rep(i, 3) { result[0][i] = A[0][i]; }
	rep(i, N) {
		if (i==0) continue;
		rep(j, 3) {
			if (j == 0) {
				int a = A[i][j] + result[i-1][1];
				int b = A[i][j] + result[i-1][2];
				result[i][0] = max(a, b);
				continue;
			}
			if (j == 1) {
				int a = A[i][j] + result[i-1][0];
				int b = A[i][j] + result[i-1][2];
				result[i][1] = max(a, b);
				continue;

			}
			if (j == 2) {
				int a = A[i][j] + result[i-1][0];
				int b = A[i][j] + result[i-1][1];
				result[i][2] = max(a, b);
				continue;
			}
		}
	}
	int answer = 0;
	for (auto v: result[N-1]) {
		answer = max(answer, v);
	}
	cout << answer << endl;
	return 0;
}

