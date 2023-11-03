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
	vector<ll> list(N); rep(i, N) {
		cin >> list[i];
		list[i] = abs(list[i]);
	}

  ll a = 0, b = 0, c = 0;
	rep(i, N) { a += list[i]; }
	rep(i, N) { b += list[i]*list[i]; }
	rep(i, N) { c = max(c, list[i]); }
	cout << a << endl;
	cout << setprecision(20) << sqrt(b) << endl;
	cout<< c << endl;
	return 0;
}

