#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<vector<int>> S(N);
    for (int i = 0; i < M; ++i) {
        int K, t;
        cin >> K;
        for (int j = 0; j < K; ++j) {
            cin >> t;
            t--;
            S[t].push_back(i);
        }
    }
    vector<int> P(M);
    for (int i = 0; i < M; ++i) {
        cin >> P[i];
    }

    auto judge = [&](int bit) {
        vector<int> cnt(M);  //電球 i につながったスイッチが押された回数
        for (int i = 0; i < N; ++i) {
            if (bit & (1 << i)) {
                for (const auto &item: S[i]) {
                    cnt[item]++;
                }
            }
        }

        for (int i = 0; i < M; ++i) {
            if (cnt[i] % 2 != P[i]) return false;
        }
        return true;
    };

    int ans = 0;
    for (int bit = 0; bit < (1 << N); ++bit) {
        ans += judge(bit);
    }

    cout << ans << '\n';
}
