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
	int L, R; cin >> L >> R;
	L--; R--;
	string S; cin >> S;
	int size = S.size();
	string a = "";
	string b = "";
	string c = "";
	rep(i, size) {
		char v = S[i];
		if (i < L) {
			a += v;
		} else if (i > R) {
			c += v;
		} else {
			b += v;
		}
	}
	reverse(b.begin(), b.end());
	cout << a + b + c << endl;

	return 0;
}
