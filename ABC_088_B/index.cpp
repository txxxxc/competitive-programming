#include <bits/stdc++.h>
using namespace std;

int main() {
	int N; cin >> N;
	int alice = 0;
	int bob = 0;
	vector<int> cards(N);
	for (int i=0; i<N; i++) {
		cin >> cards[i];
	}
	sort(cards.begin(), cards.end(), greater<int>());
	for (int i=0; i<N; i++) {
		if (i % 2 == 0) {
			alice += cards[i];
		} else {
			bob += cards[i];
		}
	}

	cout << alice - bob << endl;
	return 0;
}

