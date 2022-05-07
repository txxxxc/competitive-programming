#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
using ll = long long;

int main() {
	int N; cin >> N;
	vector<int> x(N);
	vector<int> y(N);
	vector<int> cases(N);
	double answer = 0;
	int count = 0;
	for (int i=0; i<N; i++) {
		cin >> x[i];
		cin >> y[i];
		cases[i] = i;
	}
	do {
		count++;
		double tmp_result = 0;
		for (int i=0; i<N-1; i++) {
			double xx = pow(x[cases[i]] - x[cases[i+1]], 2);
			double yy = pow(y[cases[i]] - y[cases[i+1]], 2);
			double xxyy = xx+yy;
			tmp_result += sqrt(xxyy);
		}
		answer += tmp_result;
	} while(next_permutation(cases.begin(), cases.end()));
	cout << setprecision(16) << answer / count << endl;

	return 0;

}

