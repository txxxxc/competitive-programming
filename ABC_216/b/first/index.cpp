#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
	int N; cin >> N;
	vector<string> S(N);
	vector<string> T(N);
	rep(i, N) {
		cin >> S[i] >> T[i];
	}

	rep(i, N) {
		string si = S[i];
		string ti = T[i];
		for (int j=i+1; j < N; j++) {
			string sj = S[j];
			string tj = T[j];
			if (si == sj && ti == tj) {
				cout << "Yes" << endl;
				return 0;
			}
		}
	}

	cout << "No" << endl;
	return 0;
}

