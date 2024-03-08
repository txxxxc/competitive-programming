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
	string s, t; cin >> s >> t;
	int sizes = s.size();
	int sizet = t.size();
	int ans = 0;
	// 6 - 3 = 3;
	for (int i = 0; i < sizes - sizet + 1; i++) {
		int v = 0;
		int k = i;
		rep(j, sizet) {
			if (t[j] == s[k]) {
				v++; k++;
			} else {
				k++;
			}
		}
		ans = max(v, ans);
	}
	cout << sizet - ans << endl;


	return 0;
}
