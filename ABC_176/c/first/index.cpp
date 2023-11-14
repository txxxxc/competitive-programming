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
	vector<int> A(N); rep(i, N) cin >> A[i];
	for (int i = 1; i < N; i++) {
	  // 前より小さかったら差分を足す
		if (A[i-1] > A[i]) {
      answer += A[i-1] - A[i];
			A[i] = A[i-1];
		} 
	}

	cout << answer << endl;

	return 0;
}

