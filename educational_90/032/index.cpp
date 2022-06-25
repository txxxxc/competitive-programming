#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
	int inf = 1000000000;
	int answer = inf;
	int N; cin >> N;
	vector<int> order(N);
	rep (i, N) { order[i] = i+1; }
	vector<vector<int>> players(N+1);
	rep(i, N) {
		rep(j, N) {
			int time; cin >> time;
			players[i+1].push_back(time);
		}	
	}	

	int M; cin >> M;
	vector<vector<int>> ng(N+1, vector<int>(N+1, 0));
	rep(i, M) {
		int A, B; cin >> A >> B;
		ng[A][B] = 1;
		ng[B][A] = 1;
	}


	do {
		int result = 0;
		bool isOK = true;
		for (int i=0; i<N; i++) {
			int playerNumber = order[i];
			if (i < N-1 && ng[playerNumber][order[i+1]] > 0) {
					isOK = false;
					break;
			}
			result += players[playerNumber][i];
		}
		if (isOK) answer = min(result, answer);
	} while (next_permutation(order.begin(), order.end()));
	if (answer == inf) {
		cout << -1 << endl;
	} else {
		cout << answer << endl;
	}

	return 0;
}

