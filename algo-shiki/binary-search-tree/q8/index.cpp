#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int calc(double v, vector<double> L) {
	double answer = 0;
	for (auto l: L) answer += (int)(l/v);
	return answer;
}

int main() {
	int N, K; cin >> N >> K;
	vector<double> L(N); rep(i, N) cin >> L[i];
	double left = 0, right = 2e5;

	while (right - left > 1e-8) {
		double mid = (right + left) / 2;
		if (calc(mid, L) >= K) {
			left = mid;
		} else {
			right = mid;
		}
	}
	cout << setprecision(10) << left << endl;
	return 0;
}

