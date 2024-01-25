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
	int s; cin >> s;
	if (s >= 42) {
		cout << "AGC0" << s+1 << endl;
	} else {
		if (s < 10) {
			cout << "AGC00" << s << endl;
		} else {
			cout << "AGC0" << s << endl;
		}
	}

	return 0;
}
