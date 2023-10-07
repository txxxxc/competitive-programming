#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int score[90][90], field[90][90];
bool seen[90][90];
int xl[4] = {0, 1, -1, 0};
int yl[4] = {-1, 0, 0, 1};
int answer = 0;
int tmp_answer = 0;
int N, M;

void dfs(int y, int x) {
	// cout << "dfs: " << "x: " << x << ", y: " << y << endl;
	seen[y][x] = true;
	rep(k, 4) {
		int new_y = y + yl[k];
		int new_x = x + xl[k];
		if (new_y < 0 || new_y >= N || new_x < 0 || new_x >= M) { continue; }
		if (field[new_y][new_x] == 0) { continue; } 
		if (seen[new_y][new_x]) { continue; }
		// int new_score = max(score[y][x] + 1, score[new_y][new_x]);
		int new_score = score[y][x] + 1;
		tmp_answer = max(tmp_answer, new_score);
		score[new_y][new_x] = new_score;
		dfs(new_y, new_x);
	}
	seen[y][x] = false;
}

int main() {
	cin >> M >> N;
	rep(i, N) rep(j, M) cin >> field[i][j];
	
	// すべてのstart地点について: N*M
	// dfsする: N*M
	rep(i, N) {
		rep(j, M) {
			if (field[i][j] == 0) { continue; }
			dfs(i, j);
			answer = max(answer, tmp_answer);
			rep(k, N) rep(l, M) {
				tmp_answer = 0;
				score[k][l] = 1;
				seen[k][l] = 0;
			}
		}
	}
	cout << answer << endl;

	return 0;
}

