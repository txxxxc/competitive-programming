#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using Graph = vector<vector<int>>;

Graph G;
vector<int> result;
void dfs(int u, int p, int score) {
	result[u] = score;
  for (int v: G[u]) {
		if (v == p) continue;
		dfs(v, u, score+1);
	}
}

int main() {
	int N, Q; cin >> N >> Q;
	G.resize(N, vector<int>());
	result.resize(N);
	rep(i, N-1) {
		int A, B; cin >> A >> B;
		A--; B--;
		G[A].push_back(B);
		G[B].push_back(A);
	}
	dfs(0, -1, 0);

	rep(i, Q) {
		int C, D; cin >> C >> D; C--; D--;
		if ((result[C]+result[D]) % 2 == 0) cout << "Town" << endl;
		else cout << "Road" << endl;
	}

	return 0;
}

