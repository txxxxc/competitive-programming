#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
	ll N, K; cin >> N >> K;
	ll answer = 0;
	rep(i, N) {
		cout << endl;
		answer += min(N, K/(i+1));
	}
	cout << answer << endl;
	return 0;
}

