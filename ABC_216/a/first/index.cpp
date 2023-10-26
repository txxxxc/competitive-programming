#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
	string S; cin >> S;
	int X; int Y;
	if (S.size() == 3) {
		X = stoi(string(1,S[0]));
		Y = stoi(string(1,S[2]));
	} 

	if (S.size() == 4){
		string tmp = "";
		tmp += S[0];
		tmp += S[1];
		X = stoi(tmp);
		Y = stoi(string(1,S[3]));
	}
	if (0 <= Y && Y <= 2) {
		cout << X << "-" << endl;
	} else if (3 <= Y && Y <= 6) {
		cout << X << endl;
	} else if (7 <= Y && Y <= 9) {
		cout << X << "+" << endl;
	}

	return 0;
}

