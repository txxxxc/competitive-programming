#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
	int N, Q; cin >> N >> Q;
	vector<set<int>> graph(N);
	vector<int> result(N, 0);
	rep(i, N-1) {
		int a, b; cin >> a >> b; a--; b--;
		graph[a].insert(b);
	}

	stack<int> s;
	s.push(0);
	rep(i, Q) {
    int p, x; cin >> p >> x; p--;
		result[p] += x;
	}

	while(!s.empty()) {
		int n = s.top(); s.pop();
		// 木に紐づくnodeを全部stackにpushする
		for (auto v: graph[n]) {
			result[v] += result[n];
			s.push(v);
		}
	}

	rep(i, N) cout << result[i] << " ";
	cout << endl;

	return 0;
}

