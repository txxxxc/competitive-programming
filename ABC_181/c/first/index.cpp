#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

int main() {
	int N; cin >> N;
	vector<int> x(N), y(N);
	for (int i = 0; i < N; ++i) cin >> x[i] >> y[i];

	for (int i = 0; i < N; i++) {
		for (int j = i+1; j < N; j++) {
			for (int k = j+1; k < N; k++) {
				int dx1 = x[k] - x[i], dy1 = y[k] - y[i];
				int dx2 = x[j] - x[i], dy2 = y[j] - y[i];
				if (dx1 * dy2 == dx2 * dy1) {
					cout << "Yes" << endl;
					return 0;
				}
			}
		}
	}
	cout << "No" << endl;

	return 0;
}

