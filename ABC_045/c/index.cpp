#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
	string S; cin >> S;
	int len = S.size()-1;
	ll result = 0;
	ll s = 0;
	for (int bit = 0; bit < (1 << len); bit++) {
		s = S[0] - '0';
		rep(i, len) {
			if (bit & (1 << i)) {	
				result += s;
				s = S[i+1] - '0';
			} else {
				s = s * 10 + (S[i+1] - '0');
			}
		}
		result += s;
	}
	cout << result << endl;
	return 0;
}

