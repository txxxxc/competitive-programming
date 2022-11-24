#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n, m; cin >> n >> m;
    vector<int> a(m), b(m);
    for (int i = 0; i < m; ++i) cin >> a[i] >> b[i];
    int k; cin >> k;
    vector<int> c(k), d(k);
    for (int i = 0; i < k; ++i) cin >> c[i] >> d[i];

    int kmax = 1 << k; 

    int ans = 0;
    for (int s = 0; s < kmax; ++s){
        vector<int> dish(n+1);
        for (int i = 0; i < k; ++i){
            if (s >> i & 1) ++dish[d[i]];
            else ++dish[c[i]];
        }
        int now = 0;
        for (int i = 0; i < m; ++i){
            if (dish[a[i]] >= 1 && dish[b[i]] >= 1) ++now;
        }
        ans = max(ans, now);
    }
    cout << ans;
}
