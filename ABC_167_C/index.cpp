#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, M, X; cin >> N >> M >> X;
	int INF = 10000000;
	int result = INF;
	vector<int> C(N);
	vector<vector<int>> exp(N, vector<int>(M));
	for (int i=0; i<N; i++) {
		cin >> C[i];
		for (int j=0; j<M; j++) {
			cin >> exp[i][j];
		} 
	}
	for (int bit=0; bit < (1 << N); bit++) {
		int tmp_result = 0;
		vector<int> exp_result(M);
		for (int i=0; i < N; i++) {
			if (bit & (1 << i)) {
				// 金額
				tmp_result += C[i];

				// 経験値
				for (int j=0; j<M; j++) {
					exp_result[j] += exp[i][j];
				}
			}
			bool isOK = true;
			for (auto e: exp_result) {
				if (e >= X) {
					continue;
				}
				isOK = false;
			}
			if (isOK) result = min(tmp_result, result);
		}		
	}

	if (result == INF) cout << -1 << endl;
	else cout << result << endl;

	return 0;
}

