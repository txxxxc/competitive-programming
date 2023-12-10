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
	int N; cin >> N;
	int answer = 0, Rcnt = 0;
	vector<char> c(N);
	// 1. 赤い石の数を数える(N)
	// 2. 最初からN個の白の数を数えるそれがこたえ
	string s; cin >> s;
	rep(i, N) { 
		c[i] = s[i]; 
		if (c[i] == 'R') Rcnt++;
	}

	for (int i=0; i<Rcnt; i++) {
		if (c[i] == 'W') answer++;
	}

	cout << answer << endl;
	return 0;
}

