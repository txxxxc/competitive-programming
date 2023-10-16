#include <algorithm>
#include <bits/stdc++.h>
#include <utility>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
	int N, M; cin >> N >> M;
	vector<vector<int>> result(N);
	vector<pair<int, int>> data(M);
	rep(i, M) {
		int P, Y; cin >> P >> Y;
		data[i] = make_pair(P, Y);
		result[P-1].push_back(Y);
	}

	rep(i, N) sort(result[i].begin(), result[i].end());

	rep(i, M) {
		pair<int, int> p = data[i];
		vector<int> list =  result[p.first - 1];
		cout << setw(6) << setfill('0') << p.first;
		cout << setw(6) << setfill('0') << lower_bound(list.begin(), list.end(), p.second) - list.begin() + 1;
		cout << endl;
	}

	return 0;
}

