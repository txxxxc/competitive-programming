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
	string A, B; cin >> A >> B;
	int sizeA = A.size();
	int sizeB = B.size();
	if (sizeA < sizeB) {
		rep(i, sizeB - sizeA) A = '0' + A;
	}
	if (sizeB < sizeA) {
		rep(i, sizeA - sizeB) B = '0' + B;
	}
	int size = (int)A.size();
	rep(i, size) {
		int a = A[i] - '0';
		int b = B[i] - '0';
		if (a+b >= 10) {
			cout << "Hard" << endl;
			return 0;
		}
	}
	cout << "Easy" << endl;



	return 0;
}
