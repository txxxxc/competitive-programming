#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
	int N; cin >> N;
	vector<pair<int, int>> history(N+1, {0,0});
		
	pair<int, int> current_value({0,0});
	for (int i=1; i<=N; i++) {
		int C, P; cin >> C >> P;
		history[i].first = current_value.first;
		history[i].second = current_value.second;
		if (C == 1) {
			history[i].first += P;
			current_value.first += P;
		} else {
			history[i].second += P;
			current_value.second += P;
		}
	}

	int Q; cin >> Q;
	for (int i=0; i<Q; i++) {
		int A, B; cin >> A >> B;
		if (B == 1) {
			cout << history[B].first << " " << history[B].second << endl;
			continue;
		}

		cout << history[B].first - history[A-1].first << " " << history[B].second - history[A-1].second << endl;
	}


	return 0;
}

