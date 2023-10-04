#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

vector<vector<int>> graph;
vector<int> result;
/*
  c: スタートの木
  p: 親
*/
void dfs(int c, int p) {
  for (auto v: graph[c]) {
		// 親をdfsすると無限ループするのでそれを防ぐ
		if (p == v) continue;
		result[v] += result[c];
		dfs(v, c);
	}
}

int main() {
	int N, Q; cin >> N >> Q;
	graph.resize(N, vector<int>());
	result.resize(N, 0);

	rep(i, N-1) {
		int a, b; cin >> a >> b; a--; b--;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}

	rep(i, Q) {
    int p, x; cin >> p >> x; p--;
		result[p] += x;
	}
	dfs(0, -1);

	rep(i, N) cout << result[i] << " ";
	cout << endl;

	return 0;
}

