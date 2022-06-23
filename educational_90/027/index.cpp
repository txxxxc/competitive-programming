#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
	int N; cin >> N;
	map<string, bool> userList;
	for (int i=1; i<=N; i++) {
		int prev = userList.size();
		string name; cin >> name;
		userList[name] = true;
		int current = userList.size();
		if (prev != current) cout << i << endl;
	}
	return 0;
}

