#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
	int N, A, B; cin >> N >> A >> B;
	int result = 0;	
	for (int i=1; i<=N; i++) {
		int tmp_result = 0;
		// stringに変換する
		string str = to_string(i);
		int size = str.size();
		// サイズ分for回す
		for (int j=0; j<size; j++) {
			// 中でintに変換して計算する

			// これ大事
			tmp_result += (int)str[j] - '0';
		}
		// A以上B以下やったらresultに足す
		/* if (tmp_result >= A && tmp_result <= B) { */
		if (A <= tmp_result && tmp_result <= B) {
			/* cout << tmp_result << endl; */
			result += i;
		}
	}
	cout << result << endl;
	return 0;
}

