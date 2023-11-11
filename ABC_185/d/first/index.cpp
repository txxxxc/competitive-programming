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
  int N, M; cin >> N >> M;
	if (M == 0) {
		cout << 1 << endl;
		return 0;
	}
	int minv = -1;
	int answer = 0;
	vector<int> A(M); rep(i, M) cin >> A[i];
  A.push_back(0); A.push_back(N+1);
	sort(A.begin(), A.end());
	int size = (int)A.size();
	for(int i = 1; i < size; i++) {
		if (A[i] - A[i-1] == 1) continue;
    int tmp = A[i] - A[i-1] - 1;
		if (minv == -1) minv = tmp;
		else minv = min(minv, tmp);
	}

	for(int i = 1; i < size; i++) {
		if (A[i] - A[i-1] == 1) continue;
    int tmp = A[i] - A[i-1] - 1;
		answer += tmp / minv;
		if (tmp % minv) answer++;
	}

	cout << answer << endl;

	return 0;
}

