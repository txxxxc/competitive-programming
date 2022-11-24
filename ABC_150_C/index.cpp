#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
using ll = long long;

string vector_to_int(vector<int> list) {
	string result = "";	
	for (auto item: list) {
		result += to_string(item);
	}
	return result;
}

int main() {
	int N; cin >> N;
	vector<int> list(N);
	string P = "";
	int p_count = 0;
	string Q = "";
	int q_count = 0;
	int count = 0;
	for (int i=0; i<N; i++) {
		list[i] = i+1;
	}

	for (int i=0; i<N; i++) {
		string p; cin >> p;
		P += p;
	}

	for (int i=0; i<N; i++) {
		string q; cin >> q;
		Q += q;
	}
	do {
		count++;
		string result = vector_to_int(list);

		if(result == P) {
			p_count = count;
		}

		if(result == Q) {
			q_count = count;
		}

	} while(next_permutation(list.begin(), list.end()));
	cout << abs(p_count - q_count) << endl;
	return 0;
}

