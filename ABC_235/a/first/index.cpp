#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL << 62) - (1LL << 31))
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

int main() { 
  string s; cin >> s;
  int a = s[0] - '0';
  int b = s[1] - '0';
  int c = s[2] - '0';
  int x = a*100 + b * 10 + c ;
  int y = b*100 + c * 10 + a ;
  int z = c*100 + a * 10 + b ;
  cout << x+y+z << endl;

  
  return 0; 
}
