#include <bits/stdc++.h>
using namespace std;

int main() {
	int N; cin >> N;
	string S; cin >> S;
	int result = 0;
	
	for (int i=0; i<N-2; i++) {
		if (S.substr(i, 3) == "ABC") result++;	
	}

	cout << result << endl;
	return 0;
}

