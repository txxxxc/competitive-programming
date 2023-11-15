#include <algorithm>
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
	int N; cin >> N;
	ll answer = 0, sum = 0;
	vector<ll> A(N); rep(i, N) {
		cin >> A[i];
		sum += A[i];
	}
	ll X; cin >> X;
	// 一旦超えるまで足す
	// TODO: あまり計算
	// 何回塊が合ったか
	ll s = X / sum;
	answer += s * N;
	vector<ll> B(N);
	rep(i, N)  {
		if (i == 0) {
			B[i] = (sum * s) + A[i];
		} else {
			B[i] = B[i-1] + A[i];
		}
	}	
	vector<ll>::iterator v = upper_bound(B.begin(), B.end(), X);
	answer += v - B.begin() + 1;
	cout << answer << endl;

	return 0;
}


