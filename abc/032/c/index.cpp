#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
	int N, K; cin >> N >> K;
	vector<ll> row(N); rep(i, N) cin >> row[i];
	int answer = 0;		
	int right = 0;
	ll sum = 1;

	rep (i, N) if (row[i] == 0) { cout << N << endl; return 0; }
	rep(left, N) {
		while (right < N && sum * row[right] <= K) {
			sum *= row[right];
			right++;
		}
		answer = max(answer, right - left);
		if (left == right) right++;
		else sum /= row[left];
	}
	cout << answer << endl;
	return 0;
}

