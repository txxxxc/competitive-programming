#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

int main() {
	ll N, M ,T; cin >> N >> M >> T;
	ll answer = N;
  vector<pair<ll,ll>> list(M);
	rep(i, M) {
    ll A, B; cin >> A >> B;
		list[i] = make_pair(A, B);
		// 前の地点から次のカフェまでで減った電池を計算する
		if (i == 0) {
			answer -= list[i].first;
		} else {
			answer -= list[i].first - list[i-1].second;
		}
		if (answer <= 0) {
			cout << "No" << endl;
			return 0;
		}

		// 回復したのはいくらか計算する
		answer += list[i].second - list[i].first;
		answer = min(N, answer);
	}

  answer -= T - list[M-1].second;
	if (answer <= 0) {
		cout << "No" << endl;
	} else {
		cout << "Yes" << endl;
	}

	return 0;
}

