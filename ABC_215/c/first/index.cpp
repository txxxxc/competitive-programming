#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
	string S; cin >> S;
	int N; cin >> N;
	int size = (int)S.size();
	sort(S.begin(), S.end());
	vector<char> list(size);
	vector<string> result;
	rep(i, size) list[i] = S[i];

	do {
		string tmp = "";
		rep(i, size) {
			tmp = tmp + list[i];
		}
    result.push_back(tmp);
	} while (next_permutation(list.begin(), list.end()));

  cout << result[N-1];
	return 0;
}

