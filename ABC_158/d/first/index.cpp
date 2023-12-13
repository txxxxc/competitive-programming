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
	int Q; cin >> Q;
	deque<char> deq;
	rep(i, S.size()) { deq.push_back(S[i]); }
	bool reversed = false;

	rep(i, Q) {
    int q; cin >> q;
		if (q == 1) { 
			reversed = !reversed;
		}

		if (q == 2) {
			int f; cin >> f;
			char c; cin >> c;
			if (f == 1) {
				if (reversed) deq.push_back(c);
				else deq.push_front(c);
			}

			if (f == 2) {
				if (reversed) deq.push_front(c);
				else deq.push_back(c);
			}
		}
	}

	string answer = "";
	if (reversed) {
		while(!deq.empty()) {
			answer += deq.back();
			deq.pop_back();
		}
	} else {
		while(!deq.empty()) {
			answer += deq.front();
			deq.pop_front();
		}
	}

	cout << answer << endl;

	return 0;
}

