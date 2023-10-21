#include <bits/stdc++.h>
#include <utility>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll inf = 1000000007;
vector<vector<int>> graph;

int main() {
	int N, M; cin >> N >> M;
	graph.resize(N);
	// first: 手数, second: スコア
	vector<pair<ll, ll>> result(N, make_pair(-1, 0));
	queue<int> que;
	result[0] = make_pair(0, 1);
	que.push(0);
	rep(i, M) {
		int A, B; cin >> A >> B;
		A--; B--;
		graph[A].push_back(B);
		graph[B].push_back(A);
	}

	while(!que.empty()) {
		int v = que.front(); que.pop();
		pair<ll, ll> p = result[v];
		// 手数が少なかったらqueにpushする
		for (auto u: graph[v]) {
			if (result[u].first == -1) {
			  que.push(u);
				result[u].first = p.first + 1;
				result[u].second = p.second % inf;
				continue;
			}
			if (p.first + 1 == result[u].first) {
			  result[u].second += p.second % inf;
				continue;
			}
		}
	}


	cout << result[N-1].second % inf << endl;
	return 0;
}

