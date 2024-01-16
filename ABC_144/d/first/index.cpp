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
  const double PI = acos(-1.0);
	double a, b, x; cin >> a >> b >> x;
	double h = a * a * b / 2;
	double answer = 0;
	if (x < h) answer = atan(a * b * b / (2.0 * x));
	else answer = atan((2.0 * b - 2.0 * x / (a * a)) / a);

	answer = answer / PI * 180;
	printf("%.10f\n", answer);

	return 0;
}
