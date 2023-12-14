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
	if (S[size-1] == 'r' && S[size-2] == 'e') {
		cout << "er" << endl;
	} else {
		cout << "ist";
	}

	return 0;
}

