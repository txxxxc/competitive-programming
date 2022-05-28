#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
using ll = long long;

vector<bool> sieve(int N) {
	vector<bool> list(N+1, true);
	list[0] = list[1] = false;	

	for(int i=2; i<=N; i++) {
		if (!list[i]) continue;

		for (int j=i*2; j<=N; j+=i) {
			list[j] = false;
		}
	}
	
	return list;
}

int main() {
	int N; cin >> N;
	int answer = 0;
	vector<bool> result = sieve(N);
	int size = result.size();
	for (int i=2; i<=size/2; i++) {
		if (result[i] && result[N-i]) {
			answer++;
		}	
	}
	cout << answer << endl;
	return 0;
}

