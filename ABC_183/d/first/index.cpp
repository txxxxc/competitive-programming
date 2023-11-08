#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

int main() {
	int N, W; cin >> N >> W;
	vector<ll> result(200200, 0);
	rep(i, N) {
    int S, T, P; cin >> S >> T >> P;
		result[S] += P;
		result[T] -= P;
	}

	rep(i, 200100) {
    if (result[i] > W) {
			cout << "No" << endl;
			return 0;
		}
		result[i+1] += result[i];
	}

	cout << "Yes" << endl;

	return 0;
}

