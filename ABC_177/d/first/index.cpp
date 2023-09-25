#include <bits/stdc++.h>
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
		par[x] = root(par[x]);
		return root(par[x]);
	}

	bool unite(int x, int y) {
		int rx = root(x), ry = root(y);
		if (rx == ry) return false;
		par[ry] = rx;
		return true;
	}
};

int main() {
	int N, M; cin >> N >> M;
	vector<pair<int, int>> list(M);
	UnionFind uf(N);

	rep(i, M) {
		int A, B; cin >> A >> B;
		list[i].first = A - 1;
		list[i].second = B - 1;
	}

	rep(i, M) uf.unite(list[i].first, list[i].second);
	// rep(i, N) cout << uf.root(i) << " ";
	// cout << endl;
	int answer = 0;
	vector<int> result(N, 0);
	rep(i, N) result[uf.root(i)]++;
	rep(i, N) answer = max(answer, result[i]);
	cout << answer << endl;



	return 0;
}

