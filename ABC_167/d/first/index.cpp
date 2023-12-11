#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

int N = 200200;

int main() {
  ll N, K; cin >> N >> K;
	vector<int> A(N);
	rep(i, N) {
		cin >> A[i];
		A[i]--;
	}
	vector<bool> seen(N, false);
  deque<int> a;
	int current = 0;
	while(true) {
		if (seen[current]) {
      while(a[0] != current) {
				K--;
				a.pop_front();

				if (K == 0) {
					cout << a[0] + 1 << endl;
					return 0;
				}
			}
			break;
		}

		a.push_back(current);
		seen[current] = true;
		current = A[current];
	}

	cout << a[K % a.size()] + 1 << endl;
  

	return 0;
}

