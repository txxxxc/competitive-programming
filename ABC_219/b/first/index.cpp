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
	string a, b, c; cin >> a >> b >> c;
	string s; cin >> s;
	int size = (int)s.size();
	rep(i, size) {
		char v = s[i];
		if (v == '1') {
			cout << a;
		}
		if (v == '2') {
			cout << b;
		}
		if (v == '3') {
			cout << c;
		}
	}
	cout << endl;

	return 0;
}

