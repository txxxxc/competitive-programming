#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

void add(int &a, int b) {
	int MOD = 1000000007;
	a += b;
	if (a >= MOD) a -= MOD;
}

int main() {
	int N; cin >> N;
	string S; cin >> S;
	string atcoder = "atcoder";
	int size = atcoder.size();
	vector<vector<int>> dp(N+1, vector<int>(size+1, 0));
	// 0回目の時点で0文字完成させる方法は1通りある
	dp[0][0] = 1;
	for (int i=0; i<N; i++) {
		for (int j=0; j<=size; j++) {
			// 選ばない
			add(dp[i+1][j], dp[i][j]);

			// 選ぶ
			if(j < size && S[i] == atcoder[j]) {
				add(dp[i+1][j+1], dp[i][j]);	
			}
		}
	}

	cout << dp[N][size] << endl;
	return 0;
}

