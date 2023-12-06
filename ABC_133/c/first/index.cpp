#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

// 2019 = 3 * 673
// 3 * 673に寄せる or 2019 * nに寄せる
// 3* 673の倍数が作れるならそれが正解
// Lが2019よりでかい場合：minで取る
// Lが2019より小さい場合：maxで取る
// Lが3以下のとき: 3に寄せる
// Lが3以上のとき: 673と差を計算して

// 0 ---- 3
// 3 -------- 673
// 2019 ------ 2020
// 2020 ------ 4038
int main() {
	ll L, R; cin >> L >> R;
  ll v = std::min((ll)2019, R-L);
  ll answer = 1000000;
  for (ll i = L; i <= L+v; i++) {
		for (ll j = i+1; j <= L+v; j++) {
      answer = min(answer, i*j % 2019);
		}
	}
	cout << answer << endl;
	return 0;
}

