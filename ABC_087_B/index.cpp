#include <bits/stdc++.h>
using namespace std;

int main() {
	int A, B, C, X; cin >> A >> B >> C >> X;
	int result = 0;
	for (int i=0; i<=A; i++) {
		for (int j=0; j<=B; j++) {
			for (int k=0; k<=C; k++) {
				int value = 500*i + 100*j + 50*k;
				if (value == X) result++;
			}
		}
	}
	cout << result << endl;
	return 0;
}

