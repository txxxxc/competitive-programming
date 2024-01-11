#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

// j - i != k - jである
// 4000 * 3999 / 2

int main() {
	int N; cin >> N;
	string S; cin >> S;
	ll r = 0;
	ll g = 0;
	ll b = 0;
	for (auto v: S) {
		if (v == 'R') r++;
		if (v == 'G') g++;
		if (v == 'B') b++;
	}

	ll answer = r * g * b;
	ll v = 0;
	for(int i = 0; i < N; i++) {
		for (int j = i+1; j < N; j++) {
			if (S[i] == S[j]) continue;
			int k = j*2 - i;
			if (k >= N || S[k] == S[i] || S[k] == S[j]) continue;
			v++;
		}
	}
	cout << answer - v << endl;

	return 0;
}
