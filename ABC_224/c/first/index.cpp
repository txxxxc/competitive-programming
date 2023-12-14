#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

int main() {
	int N; cin >> N;
	vector<P> l(N);
	int answer = 0;
	rep(i, N) {
		int a, b; cin >> a >> b;
		l[i] = make_pair(a, b);
	}
	for(int i=0; i<N; i++) {
    for (int j=i+1; j < N; j++){
			for (int k=j+1; k < N; k++) {
				P a = l[i], b = l[j], c = l[k];
			  if((b.first-a.first)*(c.second-a.second)-(c.first-a.first)*(b.second-a.second)!=0){
					answer++;
				}
			}
		}
	}
	cout << answer << endl;

	return 0;
}

