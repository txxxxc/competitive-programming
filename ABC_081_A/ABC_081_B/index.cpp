#include <bits/stdc++.h>
using namespace std;

int main() {
	int N; cin >> N;
	vector<int> list(N);
	int result = 0;
	bool available = true;

	for(int i=0; i<N; i++) {
		cin >> list[i];	
	}
	
	while (available) {
		for (int i=0; i<N; i++) {
			if (list[i] % 2 == 0)	{
				list[i] /= 2;
			} else {
				available = false;
			}
		}
		if (available) {
			result++;
		}	
	}
	cout << result << endl;
	return 0;
}

