#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

struct UnionFind {
	vector<int> par;
	UnionFind(int n): par(n, -1) {}

	// 1辺ずつないパターンを探して自分自身がrootになるやつを探してあれば+する1以上=２つに独立している=root２つあるので橋である
	// https://algo-logic.info/bridge-lowlink/
	// https://algo-logic.info/union-find-tree/
	int root(int x) {
		if (par[x] == -1) return x;
		return par[x] = root(par[x]);
	}

	bool unite(int x, int y) {
		int rx = root(x), ry = root(y);
		if (root(x) == root(y)) { return false; }
		// cout << "x: " << x << ", y: " << y << endl;
		// cout << "rx: " << rx << ", ry: " << ry  << endl << endl;
		par[ry] = rx;
		return true;
	}

};

int main() {
	int N, M; cin >> N >> M;
	int answer = 0;
	vector<pair<int, int>> graph(M);
	rep(i, M) {
    int a, b; cin >> a >> b;
		graph[i].first = a - 1;
		graph[i].second = b - 1;
	}
	UnionFind uf{N};
	// 一つだけ辺を除外してグラフをつなげる
	rep(i, M) {
		// cout << "debug" << endl;
		int count = 0;
		rep(j, M) {
			if (i != j) uf.unite(graph[j].first, graph[j].second);
			// else cout << "excluded: " << graph[j].first << ", " << graph[j].second << endl;
		}

		// rep(i, N) cout << uf.par[i] << " ";
		// cout << endl << endl;

		rep(i, N) {
			// cout << "i: " << i << ", ";
			// cout << "uf.root(i): " << uf.root(i) << endl;
			if (i == uf.root(i)) count++;
		}
		if (count > 1) answer++;

		// 初期化
		rep(i, N) {
			uf.par[i] = -1;
		}
	}

	cout << answer << endl;

	return 0;
}

