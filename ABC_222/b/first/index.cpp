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
	int N, P; cin >> N >> P;
	vector<int> a(N); rep(i, N) cin >> a[i];
	int v = 0;
	rep(i, N) {
		if (a[i] < P) v++;
	}
	cout << v << endl;

	return 0;
}
