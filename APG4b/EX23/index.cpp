// template for atcoder beginners
// when you create a *.cpp file, this template is loaded

#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	map<int, int> list;
	cin >> N;

	for(int i = 0; i < N; i++) {
		int a;
		cin >> a;

		if (list.count(a)) {
			list[a]++;
		} else {
			list[a] = 1;
		}
	}
	
	int key = 0;
	int count = 0;
	for (auto pair: list) {
		if (pair.second > count) {
			key = pair.first;
			count = pair.second;
		}
	}

	cout << key << " " << count << endl;
}

