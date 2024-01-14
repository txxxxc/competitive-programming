#include <bits/stdc++.h>
using namespace std;

int main() {
	int N; cin >> N;
	bool result = false;
	for (int i=1; i<10; i++) {
		for (int j=1; j<10; j++) {
			if(i*j == N) {
				result = true;
				break;
			}	
		}
		
	}

	if (result) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}

