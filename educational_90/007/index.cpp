#include <bits/stdc++.h>
using namespace std;

// 無限大を表す値
const long long INF = 1LL << 60;

int main() {
    // 入力
    int N;
    cin >> N;
    vector<long long> A(N);
    for (int i = 0; i < N; ++i) cin >> A[i];

    // ソートしておく
    sort(A.begin(), A.end());

    // 各クエリに答える
    int Q;
    cin >> Q;
    while (Q--) {
        long long B;
        cin >> B;

        // A[j] >= B となる最小の j を求める
        int j = lower_bound(A.begin(), A.end(), B) - A.begin();

        // A[j] と A[j-1] を比較する
        long long res = INF;
        if (j < N) res = min(res, abs(B - A[j]));
        if (j > 0) res = min(res, abs(B - A[j-1]));

        cout << res << endl;
    }
}
