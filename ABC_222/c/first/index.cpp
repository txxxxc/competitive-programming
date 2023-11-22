#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

// 最後のラウンドで一番勝った人順
// 勝数が同じときは、番号が小さい方が上位
// 1位の人から順に一個下の人と戦う1,2 3,4　のように
// ラウンド(100) * 人数(100) * 入れ替え(logN)
bool janken(char a, char b) {
	if (a == 'G') {
		if (b == 'G') return false;
		if (b == 'P') return false;
		if (b == 'C') return true;
	}

	if (a == 'C') {
		if (b == 'G') return false;
		if (b == 'P') return true;
		if (b == 'C') return false;
	}

	if (a == 'P') {
		if (b == 'G') return true;
		if (b == 'P') return false;
		if (b == 'C') return false;
	}
	return false;
}

int main() {
	int N, M; cin >> N >> M;
	vector<vector<char>> A(N+100, vector<char>(N+100));
	vector<P> result;
	rep(i, N*2) {
		string s; cin >> s;
		result.push_back(make_pair(0, -1*(i+1)));
		rep(j, M) {
			A[i+1][j] = s[j];
		}
	}

	rep(i, M) {
		rep(j, N) {
			// 手を取り出す
			P k = result[j*2];
			P l = result[j*2+1];
			// mラウンド目の手
			char a = A[k.second*-1][i];
			char b = A[l.second*-1][i];
			// じゃんけんする
			if (janken(a, b)) { result[j*2].first++; }
			if (janken(b, a)) { result[j*2+1].first++; }
		}
		// first: スコア(降順) second: 番号(昇順)
		sort(result.rbegin(), result.rend());
	}
	rep(i, N*2) {
		cout << result[i].second * -1 << endl;
	}
	
	return 0;
}

