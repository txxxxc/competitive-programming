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
	vector<int> p(300100); rep(i, N) cin >> p[i];
	vector<int> q(300100);
	for(int i = 1; i <= N; i++) {
	    int v = p[i];
	    q[v] = i;
	}

	for(int i = 1; i <= N; i++) {
	    cout << q[i] + 1 << " ";
	}
	return 0;
}

