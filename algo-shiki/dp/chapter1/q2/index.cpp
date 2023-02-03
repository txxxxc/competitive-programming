#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
	int N; cin >> N;
	vector<int> list(N);
	rep(i, N) cin >> list[i];
	vector<int> result(N, 0);
	result[0] = 0;
	result[1] = list[1];
	for (int i=0; i<N; i++) {
		if (i+1 >= N) { continue; }
		int m1 = result[i] + list[i+1];
		if (result[i+1] == 0 || result[i+1] > m1) result[i+1] = m1;

		if (i+2 >= N) { continue; }
		int m2 = result[i] + list[i+2] * 2;
		if (result[i+2] == 0 || result[i+2] > m2) result[i+2] = m2;
	}
	cout << result[N-1] << endl;
	
	return 0;
}

