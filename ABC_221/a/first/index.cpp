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
	ll A, B; cin >> A >> B;
	ll a = 1, b = 1;
	rep(i, A) {
		a *= 32;
	}
	rep(i, B) {
		b *= 32;
	}
	cout << a / b << endl;

	return 0;
}

