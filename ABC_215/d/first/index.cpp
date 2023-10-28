#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

int A[100100];
int result[100100];
int N, M, answer;

vector<int> func(int v) {
	vector<int> tmp;
	for (int i = 2; i * i <= v; i++) {
		if (v % i == 0) {
			tmp.push_back(i);
			while (v % i == 0) {
				v /= i;
			}
		}
	}
  
	if (v != 1) {tmp.push_back(v);}
	return tmp;
}

int main() {
	cin >> N >> M;
	answer = M;
	rep(i, N) cin >> A[i];
	rep(i, M) result[i] = true;
	// 全体から引く
  // 素因数分解して、全体から引いていく
	// 全部できたらtrueの数を数えて終わり
	rep(i, N) {
		int v = A[i];
		vector<int> list = func(v);
		for (auto u: list) {
      if (!result[u-1]) { continue; }
			result[u-1] = false; answer--;
			for (int j = 2; j * u <= M; j++) {
				int index = j * u - 1;
				if (!result[index]) { continue; }
				result[index] = false; answer--;
			}
		}
	}

	cout << answer << endl;
	rep(i, M) {
		if (result[i]) cout << i + 1 << endl;
	}
	return 0;
}

