#include <bits/stdc++.h>
#include <utility>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
using ll = long long;
using P = pair<ll, ll>;
using Graph = vector<vector<int>>;

// first: 累積和, second: 加える値
int A[200200];
int main() {
	int N; cin >> N;
	ll answer = 0;

	rep(i, N) cin >> A[i];
	ll s = 0, b = 0, max_b = 0;
	rep(i, N) {
		b += A[i];
		max_b = max(max_b, b);
		answer = max(answer, s+max_b);
    s += b;
	}

	cout << answer << endl;

	return 0;
}

