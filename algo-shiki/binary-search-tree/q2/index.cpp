#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

double calc(double n, double x) {
	double result = n+1;
	rep(i, 5) result = (result * x) + 1;
	return result;
}

int main() {
	int N, M; cin >> N >> M;
	double left = 0;
	double right = 100000;
	while (right - left > 1e-2) {
		double mid = (right + left) / 2;
		double tmp = calc(N, mid);
		if (tmp < M) left = mid;
		if (tmp > M) right = mid;
	}
	cout << left << endl; 
	return 0;
}

