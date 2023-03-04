#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
	int N, M; cin >> N >> M;
	vector<int> a(N); rep(i, N) cin >> a[i];
	vector<int> b(M); rep(i, M) cin >> b[i];
	rep(i, M) {
		int tmp = b[i];
		int left = 0;
		int right = N-1;
		while (left != right) {
			int mid = (right + left) / 2;
			if (tmp <= a[mid]) right = mid;
			if (tmp > a[mid]) left = mid+1;
		}
		cout << left << endl;
	}

	return 0;
}

