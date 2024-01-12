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
	int K; cin >> K;
	int size = (int)S.size();
	vector<int> s(size, 0);
	rep(i, size) {
		s[i] += S[i] == '.' ? 1 : 0;
	} 
	int r = 0;
	int n = 0;
	int answer = 0;
	rep(l, size) {
		while(r < size && n + s[r] <= K) {
			n += s[r];
			r++;
		}
		n -= s[l];
		answer = max(answer, r-l);
	}
	cout << answer << endl;

	return 0;
}
