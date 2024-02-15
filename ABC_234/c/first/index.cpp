#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

string toBinary(ll n) {
	string result;
	while(n > 0) {
		result = to_string(n%2) + result;
		n /= 2;
	}
	return result.empty() ? "0" : result;
}

int main() {
	ll K; cin >> K;
	string value = toBinary(K);
	ll size = value.size();
	string answer = "";
	rep(i, size) {
		if (value[i] == '1') {
			answer += "2";
		}
		if (value[i] == '0') {
			answer += "0";
		}
	}
	cout << answer << endl;

	return 0;
}
