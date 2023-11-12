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
	ll X, Y, A, B; cin >> X >> Y >> A >> B;
	ll answer = 0;
  // Aを選び続ける時は64回くらいになる
	while((double)A*X <= 2e18 && A*X<=X+B && A*X<Y) {
		X *= A;
		answer++;
	}

	cout << answer + (Y-1-X) / B << endl;

	return 0;
}

