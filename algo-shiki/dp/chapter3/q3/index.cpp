#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
	int N, M; cin >> N >> M;
	vector<int> distance(N-1);
	vector<int> points(N-1);
	vector<vector<bool>> result(N, vector<bool>(M));
	vector<vector<int>> total(N, vector<int>(M));
	rep(i, N-1) { cin >> distance[i]; }
	rep(i, N-1) { cin >> points[i]; }
	result[0][0] = true;
	
	rep(i, N) {
		if (i == N-1) continue;
		rep(j, M) {
			if (!result[i][j]) { continue; }
			// 1つ下のマスに移動する
			result[i+1][j] = true;
			total[i+1][j] = max(total[i+1][j], total[i][j]);

			// 1つ下、Aつ右のマスに移動し、Bポイント得る
			/* 
				total[i][j] + points[i]: 9
				total[i+1][j+distance[i]]: 0
			*/
			if (j + distance[i] < M ) {
				result[i+1][j+distance[i]] = true;
				total[i+1][j+distance[i]] = max(total[i+1][j+distance[i]], total[i][j] + points[i]);
			}
		}
	}
	
	if (result[N-1][M-1]) { cout << total[N-1][M-1] << endl; }
	else { cout << "-1" << endl; }
	return 0;
}

