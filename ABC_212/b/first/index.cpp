#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
	string s; cin >> s;
	int a = s[0] - '0';
	int b = s[1] - '0';
	int c = s[2] - '0';
	int d = s[3] - '0';

	int list[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	if (a == b && b == c && c == d) {
		cout << "Weak" << endl;
		return 0;
	}

	bool result = true;
	if (
	  (list[a] + 1) % 10 == b &&
	  (list[b] + 1) % 10 == c &&
	  (list[c] + 1) % 10 == d
	) {
    result = false;
	}

	if (result) cout << "Strong" << endl;
	else cout << "Weak" << endl;

	return 0;
}

