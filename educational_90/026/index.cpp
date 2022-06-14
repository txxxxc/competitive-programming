#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

vector<vector<int>> graph(100001);
vector<int> A(10001);
vector<int> B(10001);
vector<int> history(100001);

void dfs(int v1, int curr) {
	history[v1] = curr;
	for (auto v2: graph[v1]) {
		if (history[v2]) continue;
		dfs(v2, 3-curr);
	}
}

int main() {
	int N; cin >> N;
	rep(i, N) {
		int A, B; cin >> A >> B;
		graph[A].push_back(B);
		graph[B].push_back(A);
	}
	dfs(1, 1);

	vector<int> G1, G2;
	for(int i=1; i<=N; i++) {
		if (history[i] == 1) G1.push_back(i);
		if (history[i] == 2) G2.push_back(i);
	}
	if (G1.size() > G2.size()) {
		for (int i=0; i<N/2; i++) {
			if (i) cout << " ";
			cout << G1[i];
		}		
		cout << endl;
	} else {
		for (int i=0; i<N/2; i++) {
			if (i) cout << " ";
			cout << G2[i];
		}		
		cout << endl;
	}
		
	return 0;
}


