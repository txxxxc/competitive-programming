#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

int main() {
	int N, K; cin >> N >> K;
	int answer = 0;
  Graph T(N, vector<int>(N));
	vector<int> order(N-1); rep(i, N-1) { order[i] = i+1; }
	rep(i, N) rep(j, N) cin >> T[i][j];
	do {
		ll tmp = 0;
		vector<int> o = order;
		o.insert(o.begin(), 0);
		rep(i, N) {
			tmp += T[o[i % N]][o[i+1 % N]];
		}
		if (tmp == K) answer++;

	} while (next_permutation(order.begin(), order.end()));
	cout << answer << endl;

	return 0;
}

