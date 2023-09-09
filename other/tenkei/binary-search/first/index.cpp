#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
	int N, K; cin >> N >> K;
	vector<int> list(N, 0); rep(i, N) cin >> list[i];
	int answer = 0;
	int left = -1;
	int right = N;
	if (list[N-1] < K) {
		cout << -1 << endl;
		return 0;
	}

	while (right - left > 1) {
		int mid = (left + right) / 2;
		int v = list[mid];
		if (v <= K) {
			left = mid;
		} else {
			right = mid;
		}
	}

  answer = right;
	cout << answer << endl;

	return 0;
}

