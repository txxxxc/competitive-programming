#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
	int N; cin >> N;
	vector<vector<int>> list(N, vector<int>(N, 0));
	rep(i, N) cin >> list[0][i];
	rep(i, N) {
		if (i == 0) continue;
		rep(j, N) {
			// 左上	
			if (j-1 > -1) list[i][j] += list[i-1][j-1];

			// 上	
			list[i][j] += list[i-1][j];

			// 右上
			if (j+1 < N) list[i][j] += list[i-1][j+1];
			list[i][j] %= 100;
		}
	}
	cout << list[N-1][N-1] << endl;

	return 0;
}

