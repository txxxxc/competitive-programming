#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

int main() {
	double A, B; cin >> A >> B;
	double c = (B/A) * (double)100.000000;
	double answer = 100.0 - c ;
	cout << setprecision(4) << answer << endl;

	return 0;
}
