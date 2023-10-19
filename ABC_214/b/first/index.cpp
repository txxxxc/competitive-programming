#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
	int S, T; cin >> S >> T;
	int answer = 0;
	rep(i, S+1) rep(j, S+1) rep(k, S+1) if (i + j + k <= S && i * j * k <= T) answer++;
	cout << answer << endl;

	return 0;
}

