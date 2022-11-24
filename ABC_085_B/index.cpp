#include <bits/stdc++.h>
using namespace std;

int main() {
	int N; cin >> N;
	set<int> d;
	for (int i=0; i<N; i++) {
		int a; cin >> a;
		d.insert(a);
	}
	cout << d.size() << endl;
	return 0;
}

