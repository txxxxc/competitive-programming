#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
	vector<vector<int>> A(4, vector<int>(4,0));
	rep(i, 4) cin >> A[0][i];
	
	rep(i, 4) {
		if (i==0) continue;
		rep(j, 4) {
			// 左上
			if (j-1 > -1) { A[i][j] += A[i-1][j-1]; }

			// 真上
			A[i][j] += A[i-1][j];

			// 右上
			if (j+1 < 4) { A[i][j] += A[i-1][j+1]; }
		}
	}
	cout << A[3][3] << endl;
	return 0;
}

