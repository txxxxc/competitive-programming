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
	string S; cin >> S;
	int size = S.size();
	vector<vector<int>> dp(21, vector<int>(size, 0));
	rep(i, size) {
		if (S[i] == 'R') {
			dp[0][i] = i+1;
		} else {
			dp[0][i] = i-1;
		}
	}
	for (int i = 1; i < 21; i++) {
	  for(int j = 0; j < size; j++) {
			dp[i][j] = dp[i-1][dp[i-1][j]];
		}
	}
	map<int, int> mp;
  rep(i, size) {
		int v = dp[20][i];
		mp[v]++;
	}

	rep(i, size) {
		cout << mp[i] << " ";
	}

	return 0;
}
