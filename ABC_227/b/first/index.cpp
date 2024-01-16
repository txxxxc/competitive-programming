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
	int N; cin >> N;
	vector<bool> A(1001, false);
	vector<int> S(N); rep(i, N) cin >> S[i];
	rep(a, 251) {
		if (a == 0) continue;
		rep(b, 251) {
			if (b == 0) continue;
			int v = 4 * a * b + 3 * a + 3 * b; 
			if (v > 1000) continue;
			A[v] = true;
		}
	}
	int answer = 0;
	rep(i, N) {
		if (A[S[i]]) continue;
		answer++;
	}
	cout << answer << endl;

	return 0;
}
