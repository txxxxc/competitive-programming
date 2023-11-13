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
	vector<ll> A(N); rep(i, N) cin >> A[i];
	sort(A.begin(), A.end());
	vector<ll> S(N+1, 0);
	rep(i, N) S[i+1] = S[i] + A[i];

	ll answer = 0;
	rep(i, N) answer += A[i] * i - S[i];
	cout << answer << endl;

	return 0;
}

