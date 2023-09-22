#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

struct UnionFind {
	vector<int> par, rank, siz;

	UnionFind(int n): par(n, -1), rank(n, 0), siz(n, 1) {}

	int root(int x) {
		if (par[x] == -1) return x;
		else return par[x] = root(par[x]);
	}

	bool isSame(int x, int y) {
		return root(x) == root(y);
	}

  bool unite(int x, int y) {
		int rx = root(x), ry = root(y);
		if (rx == ry) return false;

		if (rank[rx] < rank[ry]) swap(rx, ry);
		par[ry] = rx;
		if (rank[rx] == rank[ry]) rank[rx]++;
		siz[rx] += siz[ry];
		return true;
	}

	int size(int x) {
		return siz[root(x)];
	}
};

int main() {
	int N, Q; cin >> N >> Q;
	UnionFind uf = {N};
  rep(i, Q) {
		int p, a, b; cin >> p >> a >> b;

		if (p == 0) {
			uf.unite(a, b);
		}

		if (p == 1) {
			if (uf.isSame(a, b)) {
				cout << "Yes" << endl;
			} else {
				cout << "No" << endl;
			}
		}
	}

	return 0;
}

