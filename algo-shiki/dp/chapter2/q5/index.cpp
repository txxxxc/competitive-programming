#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
	int N; cin >> N;
	vector<vector<string>> map(N, vector<string>(N, ""));
	vector<vector<int>> result(N, vector<int>(N));
	rep(i, N) {
		string v; cin >> v;	
		rep(j, N) {
			map[i][j] = v[j];
		}	
	}
	result[0][0] = 1;
	rep(i, N) {
		rep(j, N) {
			if (i==0 && j==0) continue;
			if (map[i][j] == "#") continue;
			if (j-1 >= 0) result[i][j] += result[i][j-1];
			if (i-1 >= 0) result[i][j] += result[i-1][j];
		}
	}
	cout << result[N-1][N-1] << endl;
	return 0;
}

