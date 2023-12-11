#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

// floor(Ax/B) - A * floor(x/B)
// B > xのときにA*floor(x/B)が0になる
ll func(ll a, ll b, ll x) {
  return ((ll)(a*x) / b) - a * (x/b);
}

int main() {
	ll a, b, n; cin >> a >> b >> n;
	ll answer = 0;

	answer = max(answer, func(a, b, n));
	if (b-1 <= n) answer = max(answer, func(a, b, b-1));
	cout << answer << endl;

	return 0;
}

