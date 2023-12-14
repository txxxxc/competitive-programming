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
	bool ans = true;
	Graph A(H, vector<int>(W));
	rep(i, H) rep(j, W) {
		cin >> A[i][j];
	}
  rep(i, H-1) {
		int a = i; int c = i+1;
		rep(j, W-1) {
			int b = j; int d = j+1;
			if (A[a][b] + A[c][d] <= A[c][b] + A[a][d]) continue;
			else {
				ans = false;
				break;
			}
		}
	}

	if (ans) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}

