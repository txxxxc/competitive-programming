#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
	int n; cin >> n;
	vector<int> a(n); rep(i, n) cin >> a[i];
	vector<bool> memo(1000000);
	int answer = 0;
	int right = 1;
	rep(left, n) {
		memo[a[left]] = true;
		if (left == right) right++;
		// trueじゃなかったらrightを増やす
		while (right < n && !memo[a[right]]) {
			memo[a[right]] = true;
			right++;
		}
		answer = max(answer, right-left);
		memo[a[left]] = false;
	}

	cout << answer << endl;;
	return 0;
}

