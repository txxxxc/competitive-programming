#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

struct UnionFind {
  vector<int> par;
	UnionFind(int N): par(N, -1) {}

	int root(int x) {
		if (par[x] == -1) return x;
		return root(par[x]);
	}

	bool same(int x, int y) {
		return root(x) == root(y);
	}

	void unite(int x, int y) {
		int rx = root(x), ry = root(y);
		if (rx == ry) return;
		par[rx] = ry;
	}

};

int main() {
	int N, M; cin >> N >> M;
	vector<int> l(N, 0);
	UnionFind uf(N);
	rep(i, M) {
		int A, B; cin >> A >> B; A--; B--;
		l[A]++; l[B]++;
		if (uf.same(A, B)) {
			cout << "No" << endl;
			return 0;
		}
		uf.unite(A, B);
	}

	rep(i, N) if (l[i] > 2) {
		cout << "No" << endl;
		return 0;
	}

	cout << "Yes" << endl;

	return 0;
}
