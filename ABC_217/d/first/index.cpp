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
	int L, Q; cin >> L >> Q;
	set<int> w;
	w.insert(0); w.insert(L);
	rep(i, Q) {
		int qi; cin >> qi;
		if (qi == 1) {
			int xi; cin >> xi;
			w.insert(xi);
		}

		if (qi == 2) {
			int xi; cin >> xi;
			auto r = w.upper_bound(xi);
			int ri = *r;
			auto l = --r;
			int li = *l;
			cout << ri - li << endl;
		}
	}

	return 0;
}
