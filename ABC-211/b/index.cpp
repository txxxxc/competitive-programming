#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
  vector<string> elem(4); 
  rep(i, 4) {
    string n; cin >> n;
    elem[i] = n;
  } 
  vector<int> list = {0, 0, 0, 0};
  int answer = 0;
  for (auto e: elem) {
    if (e == "H" && list[0] == 0){
      answer++;
      list[0]++;
    } 
    if (e == "HR" && list[1] == 0) {
answer++;
      list[1]++;
    } 
    if (e == "2B" && list[2] == 0) {
answer++;
      list[2]++;
    } 
    if (e == "3B" && list[3] == 0) {
answer++;
      list[3]++;
    } 
  }
  if (answer == 4) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
	return 0;
}

