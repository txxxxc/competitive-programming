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
	int answer = N;
	rep(i, N+1) {
		if (i == 0) continue;
		stringstream ss;
		ss << oct << i;
		string s = ss.str();
		if (
			to_string(i).find('7') != string::npos || 
			s.find('7') != string::npos
		) {
			answer--;
		}
	}
	cout << answer << endl;

	return 0;
}

