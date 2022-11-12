#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
using ll = long long;

int answer = 0;
int MAX_N = 2000;
vector<bool> history(MAX_N, false);
vector<vector<int>> city(MAX_N, vector<int>());

void dfs(vector<vector<int>> &target, int start) {
  // 訪問済みの道に来たらreturn
  if (history[start]) {
    return;
  }
  history[start] = true;
  answer++;
  for (auto c : target[start]) {
    dfs(city, c);
  }
}

int main() {
  int N, M;
  cin >> N >> M;
  city.resize(N + 1);
  history.resize(N + 1);
  rep(i, M) {
    int A, B;
    cin >> A >> B;
    city[A].push_back(B);
  }

  // dfs呼び出し
  rep1(i, N) {
    // 一回ごとに初期化する
    history = vector<bool>(N + 1);
    dfs(city, i);
  }
  cout << answer << endl;
  return 0;
}
