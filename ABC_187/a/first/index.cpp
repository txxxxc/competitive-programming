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
  string a, b; cin >> a >> b;
	int asize = (int)a.size();
	int bsize = (int)b.size();
	int av = 0, bv = 0;
	rep(i, asize) av += a[i] - '0';
	rep(i, bsize) bv += b[i] - '0';
	cout << max(av, bv) << endl;
	return 0;
}

