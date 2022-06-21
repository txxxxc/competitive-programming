#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

ll gcd(ll a, ll b) {
	if (b == 0) {
		return a;
	}
	return gcd(b, a%b);
}

int main() {
	ll A, B, C; cin >> A >> B >> C;
	ll r1 = gcd(A, B);
	ll result = gcd(r1, C);
	
	cout << A/result + B/result + C/result - 3 << endl;
	return 0;
}
