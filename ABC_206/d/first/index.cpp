#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

struct UnionFind {
	vector<int> par;
	vector<int> size;
	UnionFind(int N): par(N, -1), size(N, 0) {};
	
	int root(int x) {
		if (par[x] < 0) return x;
		par[x] = root(par[x]);
		return root(par[x]);
	}

	bool unite(int x, int y) {
		int rx = root(x), ry = root(y);
		if (rx == ry) return false;
		par[ry] = rx;
		int new_size = size[rx] + size[ry];
		size[rx] = new_size;
		size[ry] = new_size;
		return true;
	}

};

int main() {
	int MAX = 1e6;
	int N; cin >> N;
	UnionFind uf(MAX);
	vector<int> list(N, 0); 
	rep(i, N) {
		cin >> list[i];
		list[i]--;
		if (uf.size[list[i]] == 0) {
			uf.size[list[i]]++;
		}
	}

	rep(i, N/2) {
		uf.unite(list[i], list[N-1-i]);
	}

	int answer = 0;
	rep(i, MAX) {
		if (uf.root(i) == i && uf.size[i] - 1 > 0) {
			answer += uf.size[i] - 1;
		}

	}
	cout << answer << endl;

	return 0;
}

