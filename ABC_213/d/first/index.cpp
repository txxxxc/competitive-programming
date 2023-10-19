#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

vector<int> graph[1000000];
void dfs(int f, int par = -1) {
	cout << f + 1 << " ";
	for (int v: graph[f]) {
		if (v == par) continue;
		dfs(v, f);
		cout << f + 1 << " ";
	}
}

int main() {
		int N; cin >> N;

		rep(i, N-1) {
			int A, B; cin >> A >> B;
			A--; B--;
			graph[A].push_back(B);
			graph[B].push_back(A);
		}
	  rep(i, N) sort(graph[i].begin(), graph[i].end());

		dfs(0);

		return 0;
}

