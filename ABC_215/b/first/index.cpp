#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
	ll N; cin >> N;
  ll answer = 0;
	int k = 1;
	while (true) {
    ll result = pow(2, k);
		if (result <= N) {
			answer = k;
			k++;
		} else {
			break;
		}
	}

	cout << answer << endl;
	return 0;
}

