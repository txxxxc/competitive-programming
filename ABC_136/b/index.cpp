#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
	int N; cin >> N;
	int result = 0;
	for (int i=1; i<=N; i++) {
		int length = to_string(i).size();
		if(length % 2 == 1) {
			result++;
		}
	}
	cout << result << endl;
	return 0;
}

