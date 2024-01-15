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
	string S; cin >> S;
	int size = (int)S.size();
	vector<bool> answer(size, false);
	vector<int> A(size, 0);
	vector<int> result(size, 0);
	map<char, int> mp;
	queue<int> que;
	mp['L']= 0;
	mp['R']= 0;
	char prev = ' ';
	rep (i, size) {
		char v = S[i];
		if (prev == ' ') {
			prev = v;
			mp[v]++;
			continue;
		}
		if (prev == v) {
			mp[v]++;
		}
		if (prev != v) {
			if (prev == 'R') {
				answer[i] = true;
				answer[i-1] = true;
			}
			que.push(mp[prev]);
			mp[prev] = 0;
			mp[v]++;
			prev = v;
		}
	}
	que.push(mp[prev]);

  queue<int> aq;
	while(!que.empty()) {
		int a = que.front(); que.pop();
		int b = que.front(); que.pop();
		int c = a + b;
		if (c % 2) {
			aq.push((a+1) / 2 + b / 2);
			aq.push(a/2 + (b+1) / 2);
		} else {
			aq.push(c/2);
			aq.push(c/2);
		}
	}
	rep(i, size) {
		if (answer[i]) {
			int v = aq.front();aq.pop();
			cout << v << " ";
		} else {
			cout << 0 << " ";
		}
	}

	return 0;
}
