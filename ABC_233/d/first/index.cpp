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
	ll N, K; cin >> N >> K;
	ll answer = 0;
	vector<ll> A(N), S(N+1);
	rep(i, N) cin >> A[i];
	rep(i, N) S[i+1] = S[i] + A[i];
	map<ll, ll> mp;
	rep(r, N+1) {
		answer += mp[S[r]];
		mp[S[r]+K]++;
	}
	cout << answer << endl;
	
	return 0;
}
