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
	ll answer = N;
	vector<bool> l(100100, false);
	for (ll i = 2; i*i <= N; i++) {
		if (l[i]) continue;
		ll v = i * i;
		while(v <= N) {
			if (v <= 100000) {
				l[v] = true;
			}
			answer--;
			v *= i;
		}
	}

  cout << answer << endl;
	return 0;
}
