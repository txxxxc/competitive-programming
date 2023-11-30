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
  int N; cin >> N;
  double time = 0;
	double answer = 0;
	vector<double> A(N);
	vector<double> B(N);
	rep(i, N) {
		double a, b; cin >> a >> b;
		A[i] = a; B[i] = b;
		time += a / b;
	}
	time /= 2;
	rep(i, N) {
		if (A[i] / B[i] <= time) {
			answer += A[i];
			time -= A[i] / B[i];
		} else {
			answer += B[i] * time;
			break;
		}
	}
	cout << setprecision(8) << answer << endl;

	return 0;
}

