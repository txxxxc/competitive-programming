#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

// 反省：何か思い込みですぐ組み合わせの問題だと思ってしまった。
// いうて10^4しかないので全然全探索で耐えることに気づいたらよかった。
// 10^8くらいまでは耐えるので
int main() {
  string S; cin >> S;
	int answer = 0;
	// o, ?があればOK
	rep(i, 10000) {
		int v = i;
		vector<bool> list(10, false);
		// どこがtrueなのかを記録する
		rep(j, 4) {
			list[v % 10] = true;
			v /= 10;
		}

		bool isTarget = true;
		rep(j, 10) {
			if (list[j] && S[j] == 'x') isTarget = false;
			if (!list[j] && S[j] == 'o') isTarget = false;
		}

		if (isTarget) {
			answer++;
		}
	}

	cout << answer << endl;
	
	return 0;
}

