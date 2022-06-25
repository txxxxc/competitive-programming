#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

void func(
		int c, 
		int p, 
		vector<vector<int>> &graph,
		vector<int> &result
) {
	if (p != -1) result[c] += result[p];
	for(auto item: graph[c]) {
		func(item, c, graph, result);
	}
}

int main() {
	int N, Q; cin >> N >> Q;
	vector<vector<int>> graph(N+1);
	vector<int> result(N+1, 0);
	rep(i, N-1) {
		int A, B; cin >> A >> B;
		graph[A].push_back(B);
	}
	rep(i, Q) {
		int node, value; cin >> node >> value;
		result[node] += value;
	}
	func(1, -1, graph, result);
	for (int i=1; i<=N; i++) {
		cout << result[i] << " ";
	}

	return 0;
}

