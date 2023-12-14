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
	set<string> st;
	rep(i, N) {
		int L; cin >> L;
		string v = "";
		rep(j, L) {
			string vv; cin >> vv;
			v += "a" + vv;
		}
		st.insert(v);
	}

	cout << st.size() << endl;

	return 0;
}

