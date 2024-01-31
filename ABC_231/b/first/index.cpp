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
	map<string, int> mp;
	int max = 0;
	string str = "";
	rep(i, N) {
		string s; cin >> s;
		mp[s]++;
	}

	for (auto v: mp) {
		if (v.second > max) {
			max = v.second;
			str = v.first;
		}
	}
	cout << str << endl;

	return 0;
}
