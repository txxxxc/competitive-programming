#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
	int N, X, Y; cin >> N >> X >> Y;
	vector<int> list(N);
	list[0] = X;
	list[1] = Y;
	for (int i = 2; i<N; i++) {
		list[i] = (list[i-1] + list[i-2]) % 100;
	}
	cout << list[N-1] << endl;
	return 0;
}

