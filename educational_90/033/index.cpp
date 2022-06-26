#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
	int H, W; cin >> H >> W;
	if (H == 1 || W == 1) cout << H*W << endl;
	else cout << ((H+1) / 2) * ((W+1) / 2) << endl;
	return 0;
}

