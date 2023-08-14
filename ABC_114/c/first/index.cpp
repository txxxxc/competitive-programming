#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int N;
int result = 0;
// A: 現在の値
// 0b111 = 0x7 = 全部使ってる
// 100 = 7使った
// 010 = 5使った
// 003 = 3使った
// 3^9が最大の753数なので、あとはbit演算して全部使ったか判定する場ええやん
void func(int C, int state) {
	if (C > N) return;
	if (state == 7) result++;
	func(C*10 + 7, state | 0b100);
	func(C*10 + 5, state | 0b010);
	func(C*10 + 3, state | 0b001);
}

int main() {
	cin >> N;
	func(0, 0);
	cout << result << endl;
	return 0;
}

