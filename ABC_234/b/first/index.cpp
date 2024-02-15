#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

double func(pair<double, double> a, pair<double, double> b) {
	double aa = abs(a.first - b.first);
	double bb = abs(a.second - b.second);
	double cc = aa*aa + bb*bb;
	return sqrt(cc);
}

int main() {
	double answer = 0.0;
	int N; cin >> N;
	vector<pair<double, double>> l(N);
	rep(i, N) {
		double v, vv; cin >> v >> vv;
		l[i] = make_pair(v, vv);
	}
	rep(i, N) {
		for (int j = i+1; j<N; j++) {
			answer = max(answer, func(l[i], l[j]));
		}
	}
	printf("%.6f", answer);
	return 0;
}
