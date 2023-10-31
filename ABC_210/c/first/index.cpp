#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

int a[100100];
int b[100100];
int c[100100];
int result[100100];

int main() {
	int N; cin >> N;
	ll answer = 0;
	rep(i, N) { cin >> a[i]; }
	rep(i, N) { cin >> b[i]; }
	rep(i, N) { cin >> c[i]; }
	rep(i, N) {
		result[b[c[i]-1]]++;
	}

	for(int i = 0; i < N; i++) {
		answer += result[a[i]];
	}

	cout << answer << endl;

	return 0;
}

