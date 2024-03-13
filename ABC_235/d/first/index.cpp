#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL << 62) - (1LL << 31))
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

ll answer = INF;
map<string, int> mp;
int a, n; 
void func(pair<string, ll> p) {
  if (p.first == "1") answer = min(answer, p.second);
  if (p.first == "0") return;
  if(mp[p.first] != 0 && mp[p.first] <= p.second) return;
  mp[p.first] = p.second;


  string s = p.first;
  char l = s[0];
  string erase_s = s.erase(0, 1);
  string new_s = erase_s+l;
  if (new_s[0] != '0') {
    func(make_pair(new_s, p.second+1));
  }

  // 割る
  int v = stoi(p.first);
  if (v % a == 0) {
    func(make_pair(to_string(v/a), p.second+1));
  }
}

int main() { 
  cin >> a >> n;
  func(make_pair(to_string(n), 0));
  if (answer == INF) {
    cout << -1 << endl;
  } else {
    cout << answer << endl;
  }
  
  return 0; 
}
