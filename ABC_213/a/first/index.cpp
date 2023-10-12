#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
	int A, B; cin >> A >> B;
	cout << A ^ B << endl;
	bitset<32> _A(A);
	bitset<32> _B(B);

	bitset<32> result = _A ^ _B;
	cout << result.to_ulong() << endl;

	return 0;
}

