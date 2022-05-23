#include <bits/stdc++.h>
#include <bitset>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n';
using ll = long long;

bool isValid(string s) {
	bool answer = false;
	int size = s.size();
	int count = 0;
	for (int i=0; i<size; i++) {
		if (s[i] == '(') count++;
		if (s[i] == ')') count--;
		if (count < 0) {
			answer = false;
			break;
		}
	}

	if (count == 0) answer = true;
	return answer;
}

int main() {
	int N; cin >> N;
	if (N%2 == 1) return 0;
	for (int bit=0; bit < (1 << N); bit++) {
		string result = "";
		/* for (int i=N-1; i>=0; i--) { */
		for (int i=0; i<N; i++) {
			if (bit & (1 << i)) {
				result += "(";
			} else {
				result += ")";
			}
		}
		if (isValid(result)) {
			cout << result << endl;
		}
	}

	return 0;
}

