#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
using ll = long long;

int main() {
	int H, W; cin >> H >> W;
	vector<int> row(H);
	vector<int> column(W);
	vector<vector<int> > field(H, vector<int>(W));
	for (int i=0; i<H; i++) {
		for (int j=0; j<W; j++) {
			int n; cin >> n;
			row[i] += n;	
			column[j] += n;
			field[i][j] = n;
		}
	}
	for (int i=0; i<H; i++) {
		for (int j=0; j<W; j++) {
			int result = row[i] + column[j] - field[i][j];
			cout << result;
			if (j != W-1) cout << " ";
		}
		if (i != H-1) cout << endl;
	}
	return 0;
}

