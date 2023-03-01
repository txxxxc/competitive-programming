#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

double calc(double x) {
	return x * (x * (x+1) + 2 ) + 3;
}

int main() {
	double n; cin >> n;
	double left = 0, right = 100;
	while (right - left > 1e-4) {
		double mid = (right + left) / 2;
		double tmp = calc(mid);
		if (tmp > n) right = mid;
		if (tmp < n) left = mid;
	}

	cout << left << endl;
	return 0;
}

