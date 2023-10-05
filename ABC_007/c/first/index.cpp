#include <bits/stdc++.h>
#include <utility>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
  int R, C; cin >> R >> C;
	int sy, sx; cin >> sy >> sx; sy--; sx--;
	int gy, gx; cin >> gy >> gx; gy--; gx--;
	queue<pair<int, int>> q;
	vector<vector<char>> map(R, vector<char>(C, ' '));
	vector<vector<int>> score(R, vector<int>(C, 0));
	vector<vector<bool>> seen(R, vector<bool>(C, false));
	rep(i, R) {
		string s; cin >> s;
		rep(j, C) {
      char c = s[j];
			map[i][j] = c;
		}
	}
	int answer = 0;

	q.push(make_pair(sy, sx));
	while (!q.empty()) {
		// qから取り出す
		pair<int, int> v = q.front();
		q.pop();

		// 動く前にゴールだったら終わり
		if (v == make_pair(gy, gx)) {
      answer = score[gy][gx];
			break;
		}

		// 上下左右に動く
		// 上
		if (
			v.first - 1 >= 0 &&
			!seen[v.first-1][v.second] &&
			map[v.first-1][v.second] == '.'
		) {
			q.push(make_pair(v.first - 1, v.second));
			seen[v.first-1][v.second] = true;
      score[v.first-1][v.second] = score[v.first][v.second] + 1;
		}

		// 下
		if (
			v.first + 1 < R &&
			!seen[v.first+1][v.second] &&
			map[v.first+1][v.second] == '.'
		) {
			q.push(make_pair(v.first + 1, v.second));
			seen[v.first+1][v.second] = true;
      score[v.first+1][v.second] = score[v.first][v.second] + 1;
		}


		// 左
		if (
			v.second - 1 >= 0 &&
			!seen[v.first][v.second-1] &&
			map[v.first][v.second-1] == '.'
		) {
			q.push(make_pair(v.first, v.second-1));
			seen[v.first][v.second-1] = true;
      score[v.first][v.second-1] = score[v.first][v.second] + 1;
		}

		// 右
		if (
			v.second + 1 < C &&
			!seen[v.first][v.second+1] &&
			map[v.first][v.second+1] == '.'
		) {
			q.push(make_pair(v.first, v.second+1));
			seen[v.first][v.second+1] = true;
      score[v.first][v.second+1] = score[v.first][v.second] + 1;
		}
	}

	// rep(i, R) {
	// 	rep(j, C) {
	// 		cout << score[i][j];
	// 	}
	// 	cout << endl;
	// }
	cout << answer << endl;

	return 0;
}

