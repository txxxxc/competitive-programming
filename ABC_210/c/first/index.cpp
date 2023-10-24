#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
  int N, K; cin >> N >> K;
	int result = 0;
	int ans = 0;
	map<int, int> s;
	vector<int> list(N);
	int left = 0, right = 0;
	rep(i, N) cin >> list[i];
	// 一旦K-1までsetに入れる
	rep(i, K) {
		s[list[i]]++;
		if (s[list[i]] == 1) result++;
	}
	right = K-1;
	ans = max(result, ans);

	while(right != N-1) {
		s[list[left]]--;
		if (!s[list[left]]) result--;
		left += 1;

		right += 1;
		s[list[right]]++;
		if (s[list[right]] == 1) result++;
    
		ans = max(ans, result);
	} 

	cout << ans << endl;
	return 0;
}

