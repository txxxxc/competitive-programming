// https://paiza.jp/works/mondai/prefix_sum_problems_advanced/prefix_sum_problems_advanced__syakutori_practice_step2?language_uid=d
#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
	int N; cin >> N;
	vector<int> a(N); rep(i, N) cin >> a[i];
	int answer = 0;
	int right = 0;	
	rep(left, N) {
		int tmp = 0;
		while (right < N && tmp <= a[right]) {
			tmp = a[right];	
			right++;
		}
		answer += right - left;
	}
	cout << answer << endl;	
	
	return 0;
}

