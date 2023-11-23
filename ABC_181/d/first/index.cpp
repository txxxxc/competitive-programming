#include <bits/stdc++.h>
#include <string>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;



int main() {
	vector<int> l(10, 0);
	vector<int> il;
	vector<vector<int>> list;
	set<int> st;
	bool result = false;
	string s; cin >> s; int size = (int)s.size();
  if (size == 1) {
		if (stoi(s) % 8 == 0) cout << "Yes" << endl;
		else cout << "No" << endl;

		return 0;
	}

  if (size == 2) {
		int a = s[0] - '0';
		int b = s[1] - '0';
		bool result = false;
		if((a*10+b) % 8 == 0 || (b*10+a) % 8 == 0) {
			result = true;
		}

		if (result) cout << "Yes" << endl;
		else cout << "No" << endl;

		return 0;
	}

	rep(i, size) {
		int v = s[i] - '0';
		if (l[v] != 3) {
			l[v]++;
			il.push_back(v);
		} 
	} 
	// 3桁取り出してそれが8で割れるかどうかで判断できる
	// 8 * 125 = 1000なので
	// 可能性がある3桁の数字をリストして配列に返す
	// 判定して終わり
	int ils = (int)il.size();
	rep(i, ils) {
		vector<int> v;
		v.push_back(il[i]);
		rep(j, ils) {
			vector<int> vv = v;
			if (i == j) continue;
			vv.push_back(il[j]);
			rep(k, ils) {
				vector<int> vvv = vv;
				if (i==k || j==k) continue;
				vvv.push_back(il[k]);
				list.push_back(vvv);
				int tmp = 0;
				tmp += vvv[0]; tmp *= 10;
				tmp += vvv[1]; tmp *= 10;
				tmp += vvv[2];
				st.insert(tmp);
			}
		}
	}

	for (auto v: st) {
		if (v % 8 == 0) {
			result = true;
			break;
		}
	}

	if (result) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}

