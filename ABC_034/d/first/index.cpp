#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
  // 食塩水: W
  // 濃度: P
  // 食塩 = W * P / 100
  // 濃度 = 食塩 / 食塩水 * 100
  int N, K; cin >> N >> K;
  vector<double> W(N, 0), P(N, 0); rep(i, N) cin >> W[i] >> P[i];
	
  // 濃度で2分探索
  // logN * K^2
  double left = -1;
  double right = 101;
  // double型とかでどれくらいループしたら良いか分からんときは一旦目安で大丈夫なくらい回すといい感じになるかもしれん
  rep(i, 1000) {
    // 目標の濃度
    double mid = (left + right) * 0.5;

    // ギャップのlist
    vector<double> gap(N, 0);
    rep(i, N) gap[i] = W[i] * (P[i] - mid);
    sort(gap.rbegin(), gap.rend());
    double sum = 0;
    rep(i, K) sum += gap[i];

    if (sum >= 0) {
      left = mid;
    } else {
      right = mid;
    }
  }

  printf("%.10lf\n",left);

  return 0;
}

