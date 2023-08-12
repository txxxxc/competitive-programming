#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
	int K, S; cin >> K >> S;
	int result = 0;
	rep(i, K+1) {
		int X = i;
		rep(j, K+1) {
			int Y = j;
			int Z = S - X - Y;	
			if (Z >= 0 && Z <= K) {
				result++;
			}
		}
	}
	cout << result << endl;
	return 0;
}

