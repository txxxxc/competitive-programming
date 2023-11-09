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
	int N, X; cin >> N >> X;
	string S; cin >> S;
	rep(i, N) {
		if (S[i] == 'x' && X != 0) X--;
		if (S[i] == 'o') X++;
	}

	cout << X << endl;

	return 0;
}

