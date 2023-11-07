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
	int answer = 0;
	map<int, int> AResult, BResult;
	vector<int> A(N), B(N), C(N);
	rep(i, N) { 
		int v; cin >> v; v--;

	}
	rep(i, N) { cin >> B[i]; B[i]--;}
	rep(i, N) { cin >> C[i]; C[i]--;}

	return 0;
}

