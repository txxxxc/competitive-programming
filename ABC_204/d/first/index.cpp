#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

bool dp[111][100100];

int main() {
	int N; cin >> N;
	int total = 0;
	dp[0][0] = true;
	rep(i, N) {
		int v; cin >> v;
		total += v;
		rep(j, 100100) {
			if (!dp[i][j]) { continue; }
			// 選ぶ
			dp[i+1][j+v] = true;
			// 選ばない
			dp[i+1][j] = true;
		}
	}

	int ans = 0;
	int min = 10010010;
	for (int i = 0; i < 100100; i++) {
		if (dp[N][i]) {
			int v = abs(total - i);
			int vv = abs(i-v);

			if (vv < min) {
				min = vv;
				ans = max(v, i);
			}
		}
	}

	cout << ans << endl;

	return 0;
}
