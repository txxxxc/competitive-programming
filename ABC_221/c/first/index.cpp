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
	string N; cin >> N; int size = (int)N.size();
	ll answer = 0;
	vector<int> A(size);
	rep(i, size) A[i] = N[i] - '0';
	sort(A.begin(), A.end());
	do {
    for (int i = 1; i <= size; i++) {
			ll a = 0, b = 0;
			for (int j = 0; j < i; j++) {
				a = a*10 + A[j];
			}

			for (int j = i; j < size; j++){
				b = b*10 + A[j];
			}
			cout << "a: " << a << endl;
			cout << "b: " << b << endl;
			answer = max(answer, a*b);
		}
		cout << endl;
	} while(next_permutation(A.begin(), A.end()));
	cout << answer << endl;
	return 0;
}

