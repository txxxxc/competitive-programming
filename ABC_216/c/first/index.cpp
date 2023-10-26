#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
	ll N; cin >> N;
	vector<string> list;
  while (N != 0) {
		if (N % 2 == 1) {
			N--;
			list.push_back("A");
		} else {
			N = N/2;
			list.push_back("B");
		}
	}
  reverse(list.begin(), list.end());
	for (auto v: list) {
		cout << v;
	}
	cout << endl;
	return 0;
}

