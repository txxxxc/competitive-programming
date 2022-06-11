#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
	ll N; cin >> N;
	vector<ll> schools(N);
	vector<ll> students(N);
	for (int i=0; i<N; i++) {
		cin >> schools[i];
	}
	for (int i=0; i<N; i++) {
		cin >> students[i];
	}
	sort(schools.begin(), schools.end());
	sort(students.begin(), students.end());
	ll answer = 0;
	for (int i=0; i<N; i++) {
		answer += abs(schools[i] - students[i]);
	}
	cout << answer << endl;

	return 0;
}

