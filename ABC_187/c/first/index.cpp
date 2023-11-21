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
	map<string, bool> mp;
	vector<string> list(N); rep(i, N) cin >> list[i];
	sort(all(list));
	rep(i, N) {
		if (list[i][0] == '!') {
			mp[list[i]] = true;
		} else {
			string v = '!' + list[i];
			if (mp[v]) {
				cout << list[i] << endl;
				return 0;
			}
		}
	}

	cout << "satisfiable" << endl;

	return 0;
}

