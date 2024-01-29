#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

ll func(int v) {
	ll r = 0;
	for (int a = 1; a*a <= v; a++) {
		if (v % a == 0) {
			int b = v / a;
			if (a == b) r++;
			else r += 2;
		}
	}
	return r;
}

int main() {
	int N; cin >> N;
	ll answer = 0;
	for (int c = 1; c < N; c++) {
		int v = N - c;
		answer += func(v);
	}
	cout << answer << endl;

	return 0;
}
