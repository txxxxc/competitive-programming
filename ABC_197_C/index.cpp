#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
using ll = long long;
const long long INF60 = 1LL << 60;

int main() {
	int N; cin >> N;
	long long answer = INF60;
	vector<ll> list(N);
	for (int i=0; i<N; i++) {
		cin >> list[i];
	}
	for (int bit=0; bit< (1 << N); bit++) {
		ll result = 0;
		ll current_value = 0;
		for (int i=0; i<N; i++) {
			current_value |= list[i];
			if (bit & (1 << i)) {
				result ^= current_value;
				current_value = 0;
			}
		}	
		result ^= current_value;
		answer = min(answer, result);
	}

	cout << answer << endl;
	return 0;

}


