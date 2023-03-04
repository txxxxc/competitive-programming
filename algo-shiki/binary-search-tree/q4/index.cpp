#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

/*
N=5
0 1 2 3 4 5 6 7
---------------
1 1 2 3 4 5 6 9
*     -       *
			*		-		*
					*	-	*
					*	*
					w

N=7
0 1 2 3 4 5 6 7
---------------
1 1 2 3 4 5 6 9
*     -   +   *
			*		-		*
					*	-	*
						^	* // ここでleftを一個右に出来ると楽そう

N=1
0 1 2 3 4 5 6 7
---------------
1 1 2 3 4 5 6 9
*     -       *
* -   *
* *
* *

*/

int main() {
	int N, M; cin >> N >> M;
	vector<ll> a(N); rep(i, N) cin >> a[i];
	vector<ll> b(M); rep(i, M) cin >> b[i];
	sort(a.begin(), a.end());
	rep(i, M) {
		ll left = 0, right = N;
		while(left != right) {
			ll mid = (left + right) / 2;
			if (a[mid] <= b[i]) left = mid+1;
			if (a[mid] > b[i]) right = mid;
		}
		cout << left << endl;
	}

	return 0;
}

