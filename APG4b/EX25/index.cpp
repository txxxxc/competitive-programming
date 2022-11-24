#include <bits/stdc++.h>
using namespace std;

bitset<50> intersection(bitset<50> A, bitset<50> B) {
	return A & B;
}
	
bitset<50> union_set(bitset<50> A, bitset<50> B) {
	return A | B;
}
bitset<50> symmetric_diff(bitset<50> A, bitset<50> B) {
	return A ^ B;
}

bitset<50> subtract(bitset<50> A, int x) {
  A.set(x, 0);  // x¿¿¿¿¿1¿¿¿
  return A;
}

bitset<50> increment(bitset<50> A) {
	bitset<50> ret = A << 1;  // ¿¿¿¿¿¿¿¿¿+1¿¿
  if (A.test(49)) {
    ret.set(0, 1);
  }
  return ret;
}

bitset<50> decrement(bitset<50> A) {
	bitset<50> ret = A >> 1;  // ¿¿¿¿¿¿¿¿¿-1¿¿
  if (A.test(0)) {
    ret.set(49, 1);
  }
  return ret;
}

bitset<50> add(bitset<50> S, int x) {
  S.set(x, 1);  // x¿¿¿¿¿1¿¿¿
  return S;
}

void print_set(bitset<50> S) {
  vector<int> cont;
  for (int i = 0; i < 50; i++) {
    if (S.test(i)) {
      cont.push_back(i);
    }
  }
  for (int i = 0; i < cont.size(); i++) {
    if (i > 0) cout << " ";
    cout << cont.at(i);
  }
  cout << endl;
}


int main() {
  bitset<50> A, B;
  int N;
  cin >> N;
  for (int i = 0; i < N; i++) {
    int x;
    cin >> x;
    A = add(A, x);
  }
  int M;
  cin >> M;
  for (int i = 0; i < M; i++) {
    int x;
    cin >> x;
    B = add(B, x);
  }
	cout << A << endl;
	cout << B << endl;

  string com;
  cin >> com;

  if (com == "intersection") {
    print_set(intersection(A, B));
  } else if (com == "union_set") {
    print_set(union_set(A, B));
  } else if (com == "symmetric_diff") {
    print_set(symmetric_diff(A, B));
  } else if (com == "subtract") {
    int x;
    cin >> x;
    print_set(subtract(A, x));
  } else if (com == "increment") {
    print_set(increment(A));
  } else if (com == "decrement") {
    print_set(decrement(A));
  }
}
