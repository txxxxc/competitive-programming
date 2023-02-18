#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
	int N; cin >> N;
	vector<int> list(N); rep(i, N) cin >> list[i];

	ll answer = 0;
	int left = 0;
	while (left < N) {
		int right = left + 1;
		while (right < N && list[right-1] < list[right]) right++;
		ll v = right - left;
		answer += v * (v+1) / 2;
		left = right;
	}
	cout << answer << endl;
	return 0;
}

