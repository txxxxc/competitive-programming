#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;


int A[100100];
int main() {
	int N, X; cin >> N >> X;
	X--;
	int ans = 0;
	vector<bool> B(100100, false);
	rep(i, N) {
		cin >> A[i];
		A[i]--;
	}
	int v = X;
	while (true) {
		if (B[v]) break;
		B[v] = true;
		v = A[v];
		ans++;
	}
	cout << ans << endl;

	return 0;
}
