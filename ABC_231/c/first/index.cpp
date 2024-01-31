#include <algorithm>
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
	int N, Q; cin >> N >> Q;
	vector<int> A(N);
	rep(i, N) cin >> A[i];
	sort(A.begin(), A.end());
	rep(i, Q) {
		int x; cin >> x;
		auto iter = lower_bound(A.begin(), A.end(), x);
		int v = iter - A.begin();
		cout << N - v << endl;
	}
	return 0;
}
