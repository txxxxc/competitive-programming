#include <bits/stdc++.h>
#include <utility>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

int main() {
	int n; cin >> n;
	vector<P> d(n);
	int current = 0;
	bool v = false;
	rep(i, n) {
		int a, b; cin >> a >> b;
		d[i] = make_pair(a, b);
	}

	rep(i, n) {
		if (d[i].first == d[i].second) {
			current++;
		} else {
			current = 0;
		}
		if (current == 3) {
			v = true;
			break;
		}
	}
	if (v) cout << "Yes" << endl;
	else cout << "No" << endl;


	return 0;
}
