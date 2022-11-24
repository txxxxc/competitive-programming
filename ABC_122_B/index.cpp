#include <bits/stdc++.h>
using namespace std;

int main() {
	string S;
	cin >> S;
	int res = 0;
	int size = S.size();
	for (int i = 0; i < size; ++i) {
			int j;
			for (j = i; j < size; ++j) {
					if (S[j] != 'A' && S[j] != 'G' && S[j] != 'T' && S[j] != 'C')
							break;
			}
			res = max(res, j - i);
	}
	cout << res << endl;
}
