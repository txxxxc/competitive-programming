#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

int main() {
  int N, K; cin >> N >> K;
	vector<double> p(N); rep(i, N) cin >> p[i];
	vector<double> result(N);
	// 期待値を計算した値をメモ化してよしなに足し引きする
	rep(i, N) result[i] =  (p[i]+1) / 2;

	double tmp = 0;
	rep(i, K) tmp += result[i];

	double answer = tmp;
	for(int i = K; i<N; i++) {
		tmp = tmp + result[i] - result[i-K];
		answer = max(answer, tmp);
	}
	printf("%.10f\n", answer);

	return 0;
}

