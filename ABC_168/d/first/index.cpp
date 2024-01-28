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
	int N, M; cin >> N >> M;
	Graph g(N, vector<int>());
	vector<int> prev(N, -1);
	vector<int> score(N, 0);
	vector<bool> seen(N, false);
	rep(i, M) {
		int A, B; cin >> A >> B; A--; B--;
		g[A].push_back(B);
		g[B].push_back(A);
	}
  queue<int> que;
	que.push(0);
	seen[0] = true;
	while (!que.empty()) {
		int current = que.front(); que.pop();
		for(auto v: g[current]) {
			if (v == current) continue;
			// 行ったことがあるがスコアが改善される
			if (seen[v] && score[current] + 1 < score[v]) {
				score[v] = score[current] + 1;
				prev[v] = current;
				que.push(v);
			}
			// 行ったことがない
			if (!seen[v]) {
				score[v] = score[current] + 1;
				prev[v] = current;
				que.push(v);
				seen[v] = true;
			}

		}
	}
	cout << "Yes" << endl;
	for (int i = 1; i < N; i++) {
		cout << prev[i] + 1 << endl;
	}

	return 0;
}
