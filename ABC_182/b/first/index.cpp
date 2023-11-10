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
	P answer = make_pair(0, 0);
	vector<int> A(N); rep(i, N) cin >> A[i];
	for (int i = 2; i<=1000; i++) {
		P tmp = make_pair(0, i);
		rep(j, N) {
			if (A[j] % i == 0) tmp.first++;
		}
		answer = max(answer, tmp);
	}

	cout << answer.second << endl;
  

	return 0;
}

