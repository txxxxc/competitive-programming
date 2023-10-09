#include <bits/stdc++.h>
#include <utility>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
  int H, W, N; cin >> H >> W >> N;
  int dest = 1;
  int answer = 0;
  vector<vector<char>> field(H, vector<char>(W, ' '));
  vector<vector<int>> score(H, vector<int>(W, 0));
  queue<pair<int, int>> start_que;
  queue<pair<int, int>> field_que;
  vector<pair<int, int>> d_list = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
  rep(i, H) {
    string s; cin >> s;
    rep(j, W) {
      if (s[j] == 'S') {
        start_que.push(make_pair(i, j));
      }
      field[i][j] = s[j];
    }
  }
  while (!start_que.empty()) {
    pair<int, int> start = start_que.front(); start_que.pop();
    field_que.push(start);
    while (!field_que.empty()) {
      // 方向大丈夫そうやったらqueueに突っ込む
      pair<int, int> current = field_que.front(); field_que.pop();
      rep(i, 4) {
        int y = current.first + d_list[i].first;
        int x = current.second +  d_list[i].second;
        if (x >= W || x < 0 || y < 0 || y >= H) continue;
        if (score[y][x] != 0) continue;
        if (field[y][x] == 'X') continue;
        score[y][x] = score[current.first][current.second] + 1;
        field_que.push(make_pair(y, x));
        // debug(y);
        // debug(x);
        // cout << field[y][x] << endl;
        // cout << field[y][x] - '0' << endl;
        // cout << endl;
        if ((field[y][x] - '0') == dest) {
          dest++;
          answer += score[y][x];
          if (dest <= N) start_que.push(make_pair(y, x)); 
          field_que = queue<pair<int, int>>();
          score = vector<vector<int>>(H, vector<int>(W, 0));
          break;
        }
      }

      // rep(i, H) {
      //   rep(j, W) {
      //     cout << score[i][j] << " ";
      //   }
      //   cout << endl;
      // }
        // cout << endl;
    }
  }
  cout << answer << endl;
  return 0;
}

