#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
	int H, W, N; cin >> H >> W >> N;
	// 行と列で座標圧縮する&2分探索で見っけて終わり
	vector<int> hlist(N), wlist(N);
	vector<int> hrank(N), wrank(N);
	rep(i, N) {
		int A, B; cin >> A >> B;
		hlist[i] = A; wlist[i] = B;
	}
	hrank = hlist; wrank = wlist;
	sort(hrank.begin(), hrank.end());
	sort(wrank.begin(), wrank.end());
	// rankの重複を削除する
	hrank.erase(unique(hrank.begin(), hrank.end()), hrank.end());
	wrank.erase(unique(wrank.begin(), wrank.end()), wrank.end());
	rep(i, N) {
		cout << lower_bound(hrank.begin(), hrank.end(), hlist[i]) - hrank.begin() + 1;
		cout << " ";
		cout << lower_bound(wrank.begin(), wrank.end(), wlist[i]) - wrank.begin() + 1;
		cout << endl;
	}

	return 0;
}

