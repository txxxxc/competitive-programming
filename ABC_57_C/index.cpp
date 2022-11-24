#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
	long N; cin >> N;
	long result = 100000000000;
	for (long i=1; i*i<=N; i++) {
		if (N%i == 0) {
			long j = N/i;
			long target = max(i, j);
			long tmp_result = to_string(target).size();
			result = min(result, tmp_result);
		}
	}
	cout << result << endl;
	return 0;
}

