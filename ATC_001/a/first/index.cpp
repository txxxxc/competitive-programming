#include <bits/stdc++.h>
#include <utility>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
	int H, W; cin >> H >> W;
	vector<vector<char>> maze(H, vector<char>(W));
	vector<vector<bool>> seen(H, vector<bool>(W, false));
	stack<pair<int, int>> stk;

	rep(i, H) {
		string s; cin >> s;
		rep(j, W) {
			if (s[j] == 's') stk.push(make_pair(i, j));
			maze[i][j] = s[j];
		}
	}

	bool result = false;
	// sからスタート
	while(!stk.empty()) {
		pair<int, int> v = stk.top();
		stk.pop();

		char current = maze[v.first][v.second];
		// #だったらcontinue 
		if (current == '#') continue;
		// gだったらYesを入れて終わり
		else if (current == 'g') {
			result = true;
      break;
		}
		seen[v.first][v.second] = true;

		// 4方向に進んでみる
		// 上
		if (v.first - 1 >= 0 && !seen[v.first-1][v.second]) {
			// cout << "stack pushed: " << v.first << ", " << v.second << endl;
			stk.push(make_pair(v.first - 1, v.second));
		}

		// 下
		if (v.first + 1 < H && !seen[v.first+1][v.second]) {
			// cout << "stack pushed: " << v.first << ", " << v.second << endl;
			stk.push(make_pair(v.first + 1, v.second));
		}

		// 左
		if (v.second - 1 >= 0 && !seen[v.first][v.second-1]) {
			// cout << "stack pushed: " << v.first << ", " << v.second << endl;
			stk.push(make_pair(v.first, v.second - 1));
		}

		// 右
		if (v.second + 1 < W && !seen[v.first][v.second+1]) {
			// cout << "stack pushed: " << v.first << ", " << v.second << endl;
			stk.push(make_pair(v.first, v.second + 1));
		}

	}

	if (result) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;
}

