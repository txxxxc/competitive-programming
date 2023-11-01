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
	map<string, int> m;
	string a, b, c; cin >> a >> b >> c;
	m[a]++; m[b]++; m[c]++;
	if (!m["ABC"]) { cout << "ABC" << endl; }
	if (!m["ARC"]) { cout << "ARC" << endl; }
	if (!m["AGC"]) { cout << "AGC" << endl; }
	if (!m["AHC"]) { cout << "AHC" << endl; }

	return 0;
}

