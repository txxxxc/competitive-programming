#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int INF = 10000000;
int main() {
	int N; cin >> N;
	vector<vector<int>> list(N, vector<int>(N));
	rep(i, N) rep(j, N) cin >> list[i][N-1-j];
	vector<vector<int>> answer(N, vector<int>(N, INF));
	answer[0][0] = list[0][0];
	rep(i, N) {
		rep(j, N) {
			if (i==0 && j==0) continue;
			if (i-1 >= 0) answer[i][j] = min(answer[i][j], answer[i-1][j] + list[i][j]);	
			if (j-1 >= 0) answer[i][j] = min(answer[i][j], answer[i][j-1] + list[i][j]);	
		}
	}
	cout << answer[N-1][N-1] << endl;
	return 0;
}

