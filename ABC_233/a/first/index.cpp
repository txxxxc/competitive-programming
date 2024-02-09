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
	int X, Y; cin >> X >> Y;
	if (X > Y) {
		cout << 0 << endl;
		return 0;
	}
	int answer = 0;
	int z = Y - X;
	answer += z / 10;
	if (z % 10) {
		answer++;
	}
	cout << answer << endl;

	return 0;
}
