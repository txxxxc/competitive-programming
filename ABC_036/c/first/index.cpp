#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
	int N; cin >> N;
	vector<int> A(N); rep(i, N) cin >> A[i];
	vector<int> B = A;
	sort(B.begin(), B.end());
	B.erase(unique(B.begin(), B.end()), B.end());
	rep(i, N) {
		cout << lower_bound(B.begin(), B.end(), A[i]) - B.begin() << endl;
	}
	

	return 0;
}

