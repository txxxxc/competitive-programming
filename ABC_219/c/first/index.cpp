#include <bits/stdc++.h>
#include <utility>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

int main() {
	string X; cin >> X;
	int N; cin >> N;

	vector<string> S(N); rep(i, N) cin >> S[i];
	// 王国, 本来
	map<char, char> m;
	string origin = "abcdefghijklmnopqrstuvwxyz";
	string hoge =   "bacdefghijklmnopqrstuvwxzy";
	vector<pair<string, string>> result(N);
	int size = (int)X.size();
	rep(i, size) {
		char c = X[i];
		m[c] = origin[i];
	}

	// 全部について
	rep(i, N) {
		// Sのサイズを取る
		// 翻訳
		int ss = (int)S[i].size();
		string tmp = "";
		rep(j, ss) {
			tmp += m[S[i][j]];
		}
		result[i] = make_pair(tmp, S[i]);
	}

	// ソート
	sort(result.begin(), result.end());
	rep(i, N) {
		// pair.first, pair.second
		cout << result[i].second << endl;
	}

	return 0;
}

