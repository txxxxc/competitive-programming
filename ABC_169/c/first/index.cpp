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
	ll A; cin >> A;
	string B; cin >> B;
	string _l = B.substr(0, B.find('.'));
	B.erase(0, B.find('.')+1);
	string _r = B;
	ll l = stoi(_l);
	ll r = stoi(_r);
  ll answer = (A*l) + ((A*r) / 100);
	cout << answer << endl;
	return 0;
}
