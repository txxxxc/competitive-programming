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
	ll answer = 100100100100;
	rep(i, N) {
		ll a, p, x;
		cin >> a >> p >> x;
		if (x-a <= 0) continue;
		answer = min(answer, p);
	}

	if (answer == 100100100100) cout << -1 << endl;
	else cout << answer << endl;
	return 0;
}
