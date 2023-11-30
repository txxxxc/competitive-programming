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
	vector<string> list;
	rep(i, size) {
		char c = S[0];
		S.erase(0, 1);
		S = S + c;
		list.push_back(S);
	}
	sort(all(list));
	cout << list[0] << endl;
	cout << list[size - 1] << endl;
	return 0;
}

