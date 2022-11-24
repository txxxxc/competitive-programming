#include <bits/stdc++.h>
using namespace std;

int main() {
	string s; cin >> s;
	int result = 0;
	for (int i=0; i<3; i++) {
		if (s[i] == '1') result++;
	}
	cout << result << endl;
	return 0;
}

