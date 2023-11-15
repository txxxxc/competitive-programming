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
	int K ; cin >> K;
	string A, B; cin >> A >> B;
	int asize = A.size();
	int bsize = B.size();
	ll a10 = 0, b10 = 0;
	rep(i, asize) {
		a10 += pow(K, i) * (A[asize - 1 - i] - '0');
	}
	rep(i, bsize) {
		b10 += pow(K, i) * (B[bsize - 1 - i] - '0');
	}
	cout << a10 * b10 << endl;
	return 0;
}

