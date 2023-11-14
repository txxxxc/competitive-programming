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
	string N; cin >> N;
	int size = N.size();
  ll answer = 0;
	rep(i, size) {
		answer += (int)N[i] - 48;
	}

	if (answer % 9 == 0) cout << "Yes" << endl; 
	else cout << "No" << endl;

	return 0;
}

