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
	ll N; cin >> N;
	ll answer = 0;
	for (ll a = 1; a*a*a <= N; a++) {
		ll vv = N / a;
		for (ll b = a; a*b*b <= N; b++) {
			ll vvv = vv / b;
			ll r = vvv - b + 1;
			answer += r;
		}
	}
	cout << answer << endl;

	return 0;
}
