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
	int size = S.size();
	if (S[size-1] == 's') {
		cout << S << "es" << endl;
	} else {
		cout << S << 's' << endl;
	}

	return 0;
}
