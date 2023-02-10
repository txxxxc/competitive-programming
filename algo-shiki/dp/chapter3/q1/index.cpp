#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
	int N, M; cin >> N >> M;
	vector<int> A(N-1); rep(i, N-1) cin >> A[i];
	vector<vector<bool>> result(N, vector<bool>(M, false));
	result[0][0] = true;
	
	rep(i, N) {
		if (i == N-1) continue;
		rep(j, M){
			if (!result[i][j]) continue;
			// １つ下のマス
			result[i+1][j] = true;

			// 1つ下、Aiつ右のマス
			if (j + A[i] < M) { result[i+1][j+A[i]] = true;}
		}
	}
	int answer = 0;
	for (auto v: result[N-1]) if (v) answer++;
	cout << answer << endl;
	return 0;
}

