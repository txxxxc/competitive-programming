#include <bits/stdc++.h>
#include <utility>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

struct UnionFind {
	vector<int> par;
	UnionFind(int n): par(n, -1) {}

	int root(int x) {
		if (par[x] == -1) return x;
		return par[x] = root(par[x]);
	}

	bool unite(int x, int y) {
		int rx = root(x), ry = root(y);
		if (rx == ry) return false;
		par[ry] = rx;
		return true;
	}

};

int main() {
	int N, K, L; cin >> N >> K >> L;
	UnionFind uf_road(N);
	UnionFind uf_rail(N);
	rep(i, K) {
		int a, b; cin >> a >> b;
		a--; b--;
		uf_road.unite(a, b);
	}

	rep(i, L) {
		int a, b; cin >> a >> b;
		a--; b--;
		uf_rail.unite(a, b);
	}

	map<pair<int, int>, int> result;
	rep(i, N) {
		int x = uf_road.root(i);
		int y = uf_rail.root(i);
		result[make_pair(x, y)]++;
	}

	rep(i, N) {
		int x = uf_road.root(i);
		int y = uf_rail.root(i);
		cout << result[make_pair(x, y)] << " ";
	}
	cout << endl;

	return 0;
}

