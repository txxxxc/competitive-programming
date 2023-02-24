#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
	int n, q; cin >> n >> q;
	vector<int> a(n); rep(i, n) cin >> a[i];
	vector<int> x(q); rep(i, q) cin >> x[i];
	rep(i, q) { 
		int query = x[i];

		ll answer = 0;
		int right = 0;
		ll sum = 0;
	
		rep(left, n) {
			while (right < n && sum + a[right] <= query) {
				sum += a[right];
				right++;
			}
			
			answer += (right - left);

			if (right == left) right++;
			else sum -= a[left];
		}
		cout << answer << endl;
	}
	return 0;
}

