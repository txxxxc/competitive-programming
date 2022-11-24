#include <bits/stdc++.h>
using namespace std;

long long solve(long long N) {
    vector<int> A;
    while (N) {
        A.push_back(N % 10);
        N /= 10;
    }

    const int INF = 1<<29;
    int res = INF;
    for (int bit = 0; bit < (1 << A.size()) - 1; ++bit) {
        int sum = 0, con = 0;
        for (int i = 0; i < A.size(); ++i) {
            if (bit & (1<<i)) ++con;
            else sum += A[i];
        }
        if (sum % 3 == 0) res = min(res, con);
    }
    return (res < INF ? res : -1);
}

int main() {
    long long N;
    cin >> N;
    cout << solve(N) << endl;
}
