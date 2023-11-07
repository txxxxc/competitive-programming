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
	string S; cin >> S;
	int size = (int)S.size();
	vector<char> list(size);
	rep(i, size) { 
		char c = S[i];
		if (c == '6') { c = '9'; list[i] = c; continue;}
		if (c == '9') { c = '6'; list[i] = c; continue; }
		list[i] = c;
	}
	reverse(list.begin(), list.end());
	rep(i, size) { cout << list[i]; }

	return 0;
}

