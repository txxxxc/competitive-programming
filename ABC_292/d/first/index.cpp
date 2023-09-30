#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

struct UnionFind {
	vector<int> par, size, edges;
	UnionFind(int n): par(n, -1), size(n, 1), edges(n, 0) {}

	int root(int x) {
		if (par[x] == -1) { return x; }
		return par[x] = root(par[x]);
	}

	void unite(int x, int y) {
		int rx = root(x), ry = root(y);
		// 一旦rootだけ判定できてたら耐えるはず
		if (rx == ry) { 
			edges[rx]++;
			return; 
		}
		int new_edge = edges[rx] + edges[ry];
		edges[rx] = new_edge + 1; edges[ry] = new_edge + 1; 
		// uniteする
		int new_size = size[rx] + size[ry];
		size[rx] = new_size;
		size[ry] = new_size;
		par[ry] = rx;
	}
};

int main() {
  int N, M; cin >> N >> M;
	UnionFind uf(N);
	rep(i, M) {
		int A, B; cin >> A >> B; A--; B--;
		uf.unite(A, B);
	}

	bool result = true;
	rep(i, N) {
		int v = uf.root(i);
    if (uf.size[v] != uf.edges[v]) {
			result = false;
			break;
		}
	}

	if (result) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}

