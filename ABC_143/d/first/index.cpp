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
	ll answer = 0;
	vector<int> L(N, 0); rep(i, N) cin >> L[i];
	sort(all(L));

	// 1 2 3 4 5
	// rep(b, N){
	for(int a = 0; a< N; a++) {
		for(int b = a+1; b< N; b++) {
	  // rep(a, b) {
			// cout << "a: " << a << ", b: " << b << endl;
			// a - b < c && b - a < c は気にしなくてOK
			int e = L[a]+L[b]; // e > c;

			int r = lower_bound(L.begin(), L.end(), e) - L.begin();
			int l = b + 1;
			answer += max(0, r - l);
		}
	}
	cout << answer << endl;

	return 0;
}
