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
	int n, k; cin >> n >> k;
	vector<int> p(n); rep(i, n) cin >> p[i];
	vector<int> current(k);
	rep(i, k) cout << current[i] << endl;
	rep(i, k) current.push_back(p[i]);
	sort(current.begin(), current.end());
	for (int i = k; i < n; i++) {
		// push_backが重い説
		current.push_back(p[i]);
		cout << "capacity: " << current.capacity() << ", size: " << current.size() << endl;
		sort(current.begin(), current.end());
		int size = current.size();
		cout << current[size-k] << endl;
	}

	return 0;
}
