#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
	int N; cin >> N;
	vector<vector<int>> result(N, vector<int>(N));
	rep(i, N) rep(j, N) cin >> result[i][j];
	vector<vector<int>> answer(N, vector<int>(N));
	answer[0][0] = result[0][0];
	rep(i, N) {
		rep(j, N) {
			if (i==0 && j==0) continue;
			if (i-1 >= 0) answer[i][j] = max(answer[i][j], answer[i-1][j] + result[i][j]);
			if (j-1 >= 0) answer[i][j] = max(answer[i][j], answer[i][j-1] + result[i][j]);
		}
	}
	cout << answer[N-1][N-1] << endl;
	return 0;
}

