#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
	int N; cin >> N;
	vector<int> w(N), sorted(N);
	rep(i, N) {
		int v; cin >> v;
		w[i] = v;
		sorted[i] = v;
	}
	sort(sorted.begin(), sorted.end());
	rep(i, N) {
		int v = w[i];
		int left = 0, right = N-1;
		while (left != right) {
			int mid = (left + right) / 2;
			if (sorted[mid] >= v) right = mid;
			else left = mid + 1;
		}
		cout << left << endl;
	}
	return 0;
}

