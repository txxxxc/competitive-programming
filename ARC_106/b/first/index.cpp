#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

struct UnionFind {
  vector<int> par;	
	UnionFind(int N): par(N, -1) {}

	int root(int x) {
		if (par[x] == -1) { return x; }
		return par[x] = root(par[x]);
	} 

	bool isSame(int x, int y) {
		return root(x) == root(y);
	}

	bool unite(int x, int y) {
    int rx = root(x), ry = root(y);
		if (rx == ry) { return false; }
		par[ry] = rx;
		return true;
	}

};

int main() {
	int N, M; cin >> N >> M;
	vector<ll> A(N, 0), B(N, 0);
	UnionFind uf(N);
	rep(i, N) {
		cin >> A[i];
	}
	rep(i, N) {
		cin >> B[i];
	}

	rep(i, M) {
		int a, b; cin >> a >> b; a--; b--;
		uf.unite(a, b);
	}

	// rootに値を寄せて、値がすべて等しければOK
	// nodeが繋がっていたら無限に値が受け渡し可能なので、連結成分ごとに値の総数が等しければ大丈夫
	vector<ll>ASum(N, 0), BSum(N, 0);

	rep(i, N) {
		int root = uf.root(i);
		ASum[root] += A[i];
		BSum[root] += B[i];
	}

	bool result = true;
	rep(i, N) {
		if (ASum[i] != BSum[i]) {
			result = false;
			break;
		}
	}

	if (result) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;
}

