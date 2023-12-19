#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

long long gcd(long long a, long long b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

ll lcm(ll a, ll b) {
    long long d = gcd(a, b);
    return a / d * b;
}

int main() {
	ll a, b, c, d; cin >> a >> b >> c >> d;
	ll A = (b / c) - ((a-1) / c);
	ll B = (b / d) - ((a-1) / d);
	ll C = (b / lcm(c, d)) - ((a-1) / lcm(c, d));
	ll e = A + B + C - 2*C;
	cout << b - a + 1 - e;


	return 0;
}

