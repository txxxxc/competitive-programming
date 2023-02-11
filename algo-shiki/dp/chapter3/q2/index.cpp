#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
	int N, M; cin >> N >> M;
	vector<int> balls(N); rep(i, N) cin >> balls[i];
	vector<vector<bool>> map(N+1, vector<bool>(M+1));
	map[0][0] = true;
	rep(i, N+1) {
		if (i == N) continue;
		rep(j, M+1) {
			if (!map[i][j]) continue;
			// 選ばない
			map[i+1][j] = true;
			// 選ぶ
			if (j + balls[i] < M+1) map[i+1][j+balls[i]] = true;
		}
	}
	
	if (map[N][M]) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}

