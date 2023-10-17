#include <bits/stdc++.h>
#include <utility>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
	int N; cin >> N;
	vector<pair<int, string>> A(N);
	rep(i, N) {
		string s; int t;
		cin >> s >> t;
		A[i] = make_pair(t, s);
	}
	sort(A.begin(), A.end());
	cout << A[N-2].second << endl;

	return 0;
}

