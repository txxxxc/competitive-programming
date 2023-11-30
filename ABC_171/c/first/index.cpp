#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

int main() {
	ll N; cin >> N;
	ll n = N;
	string answer = "";
	while(n) {
		n--;
    int v = n % 26;
		answer = char('a' + v) + answer;
		n /= 26;
	}
	cout << answer << endl;

	return 0;
}

