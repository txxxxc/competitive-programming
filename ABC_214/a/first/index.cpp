#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
	int N; cin >> N;
	if (N >= 1 && N < 126) {
		cout << 4 << endl;
		return 0;
	}

	if (N >= 126 && N < 212) {
		cout << 6 << endl;
		return 0;
	}

	if (N >= 212 && N < 215) {
		cout << 8 << endl;
		return 0;
	}

	return 0;
}

