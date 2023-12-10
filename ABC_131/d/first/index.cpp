#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

int N = 200000;
// A, B = 10^9
bool compare(P a, P b) {
  return a.second < b.second;
}
int main() {
	cin >> N;
	ll c = 0; bool result = true;
	vector<P> l(N);
	rep(i, N) {
		int a, b; cin >> a >> b;
		l[i] = make_pair(a, b);
	}
	sort(l.begin(), l.end(), compare);
	rep(i, N) {
		c += (ll)l[i].first;
		if (l[i].second < c) {
			result = false;
			break;
		}
	}

	if (result) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;
}

