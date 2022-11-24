#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    int H, W, K;
    cin >> H >> W >> K;
    string c[H];
    for (int i = 0; i < H; i++) {
        cin >> c[i];
    }
    int ans = 0;
    for (int i = 0; i < (1<<H); i++) {
        for (int j = 0; j < (1<<W); j++) {
            int cnt = 0;
            for (int k = 0; k < H; k++) {
                if ((i & (1<<k)) != 0) continue;
                for (int l = 0; l < W; l++) {
                    if ((j & (1<<l)) != 0) continue;
                    if (c[k][l] == '#') cnt++;
                }
            }
            if (cnt == K) ans++;
        }
    }
    cout << ans << "\n";
    return 0;
}
