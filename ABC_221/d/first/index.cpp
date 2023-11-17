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
	int N; cin >> N;
	vector<int> list;
	// これ座標圧縮説ある
	map<int, int> m;
	vector<int> answer(N+1, 0);

	// 区間に変更する[a, b)
	rep(i, N) {
		int A, B; cin >> A >> B;
		B += A;

		// mには値を入れる
		m[A]++; m[B]--;
	}
  
	int prev = 0;
	for(auto [day, count]: m) {
		m[day] = count + m[prev];
		prev = day;
	}

	prev = 0;
	for(auto [day, _]: m) {
		answer[m[prev]] += day - prev;
		prev = day;
	}

	rep(i, N) cout << answer[i+1] << " ";
	cout << endl;

	return 0;
}

