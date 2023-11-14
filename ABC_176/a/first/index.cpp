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
	int N, X, T; cin >> N >> X >> T;
	int answer = 0;
	int A = N / X;
	if (N % X) A++;
	answer += A * T;
	cout << answer << endl;

	return 0;
}

