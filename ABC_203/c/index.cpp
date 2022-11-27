#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
  // N: 友達の数
  // K: 所持金
  ll N, K;
  cin >> N >> K;
  vector<pair<ll, ll>> friends;
  rep(i, N) {
    ll A, B;
    cin >> A >> B;
    pair<ll, ll> p;
    p.first = A;
    p.second = B;
    friends.push_back(p);
  }
  sort(friends.begin(), friends.end());
  for (auto f : friends) {
    // 村までつけたら所持金が増える
    if (f.first <= K) {
      K += f.second;
    }
  }
  cout << K << endl;
  return 0;
}
