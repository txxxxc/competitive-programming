#include <bits/stdc++.h>
using namespace std;

bool istheNumber(int n) {
	bool result = false;
	int count = 0;
	for (int i=1; i <= n; i++) {
		if (n % i == 0) count++;
	}
	if (count==8) {
		result = true;
	}
	return result;	
}

int main() {
	int N; cin >> N;
	int result = 0;
	for (int i=1; i<=N; i++) {
		if (i%2 == 1 && istheNumber(i)) {
			result++;
		}
	}

	cout << result << endl;
	return 0;
}

