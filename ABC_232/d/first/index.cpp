#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

int h, w;
int answer = 0;
string c[110][110];

int main() {
	cin >> h >> w;
	rep(i, h) {
		string v; cin >> v;
		rep(j, w) {
			c[i][j] = v[j];
		}
	}	
	vector<vector<int>> dp(h, vector<int>(w, 0));
	dp[0][0] = 1;
	for (int i = h-1; i >= 0; i--) {
		for (int j = w - 1; j >= 0; j--) {
			if (c[i][j] == "#") continue;
			dp[i][j] = 1;
			if (i+1 < h) dp[i][j] = max(dp[i][j] , dp[i+1][j] + 1);
			if (j+1 < w) dp[i][j] = max(dp[i][j] , dp[i][j+1] + 1);
		}
	}
	cout << dp[0][0] << endl;

	return 0;
}
