#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
	int a, b; cin >> a >> b;
	if (0 < a && b == 0) {
		cout << "Gold" << endl;
		return 0;
	}
	if (a == 0 && 0 < b) {
		cout << "Silver" << endl;
		return 0;
	}
	if (0 < a && 0 < b) {
		cout << "Alloy" << endl;
		return 0;
	}


	return 0;
}

