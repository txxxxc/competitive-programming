#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
	int N; cin >> N;
	vector<vector<int>> map(N, vector<int>(N));
	map[0][0] = 1;

	rep(i, N) {
		rep(j, N) {
			if (i==0 && j==0) continue;
			if (i-1 >= 0) map[i][j] += map[i-1][j];
			if (j-1 >= 0) map[i][j] += map[i][j-1];
		}
	}
	cout << map[N-1][N-1] << endl;

	return 0;
}

