#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
	ll N, A, B, C; cin >> N >> A >> B >> C;

	ll answer = 9999;
	int l = 9999;
	for (ll i=0; i <= l; i++) {
		debug(N - i*A);
		for (ll j=0; j <= l; j++) {
			ll tmp = N - i*A - j*B;	
			if (tmp < 0) continue;
			if (tmp % C == 0)	{
				ll k = tmp / C;
				answer = min(answer, i+j+k);
			}
		}
	}
	cout << answer << endl;
	return 0;
}


