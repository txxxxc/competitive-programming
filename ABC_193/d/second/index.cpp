#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

int score(string s) {
	map<int, ll> mp;
	ll v = 0;
	for (int i = 1; i <= 9; i++) {
		mp[i] = i;
	}
	// sの数の構成を考える
	for (auto c: s) {
		if (c == '#') continue;
		mp[c-'0'] = mp[c-'0'] * 10;
	}

	for (auto p: mp) {
		v += p.second;
	}
	return v;
}

// 勝率 = 勝つ確率/ 全部の確率
int main() {
	ll k; cin >> k;
	string s, t; cin >> s >> t;
	map<int, int> mp;
  ll count = 0;
	for (int i =1; i<=9; i++) {
		mp[i] = k;
	}
	vector<char> list = {'0','1','2','3','4','5','6','7','8','9'};
	// すでに選ばれている数を引く
	for (int i = 0; i < 4; i++) {
		char ci = s[i];
		char cj = t[i];
		mp[ci-'0']--;
		mp[cj-'0']--;
	}

	// 分子の計算
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j<=9; j++) {
			if (mp[j] == 0) continue; 
			// スコアの計算
			s[4] = list[i];
			t[4] = list[j];
		  ll sv = score(s);
			ll st = score(t);
			if (sv <= st) continue;
			count += mp[i] * (mp[j] - (i == j));
		}
	}
	ll all = (9*k-8) * (9*k-9);
  double ans = (double)count/all;
	cout << setprecision(10) << ans << endl;

	return 0;
}

