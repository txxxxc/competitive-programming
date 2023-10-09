#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
	int N; cin >> N;
  int answer = 0;
	for(int i = 1; i <= N; i++) {
		int count = 0;
		if (i % 2 == 0) continue;
		for(int j = 1; j <= i; j++) {
			if (i % j == 0) count++;
		}

		if (count == 8) answer++;
	}
	cout << answer << endl;

	return 0;
}

