#include <bits/stdc++.h>
using namespace std;

int main() {
	int result = 0;
	int A, B, C, X, Y; cin >> A >> B >> C >> X >> Y;

	int target = min(X, Y);
	// A,Bの少ない方をCで買って、残りを買う
	// 少ない方分を買うだけ買う
	int tmp_result = C * target * 2;
	// 足りない分を買う
	if (X>Y) {
		tmp_result += A * (X-Y);
	} else {
		tmp_result += B * (Y-X);
	}
	result = tmp_result;

	// A, Bを単純に買う
	int AB = A*X + B*Y;
	result = min(result, AB);

	// Cを使って全部買う
	int t = max(X,Y);
	result = min(result, t*C*2);

	cout << result << endl;
	return 0;
}

