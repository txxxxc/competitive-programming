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
	int H, W; cin >> H >> W;
	int minv = 10000;
	int answer = 0;
	Graph field(H, vector<int>(W));
	rep(i, H) rep(j, W) {
		int v; cin >> v;
		minv = min(minv, v);
		field[i][j] = v;
	}

	rep(i, H) rep(j, W) {
		answer += field[i][j] - minv;
	}
	cout << answer << endl;


	return 0;
}

