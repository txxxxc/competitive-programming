#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL<<62)-(1LL<<31)) 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

struct Node {
	Node* prev;
	Node* next;
	int value;
	Node(const int value = 0): next(nullptr), value(value) {}
};

int N;
int Q;
vector<Node*> l;

int main() {
	cin >> N; cin >> Q;
	l.resize(N+100);
	rep(i, Q) {
    int qi; cin >> qi;
		if (qi == 1) {
      int x, y; cin >> x >> y;
			Node *xn = new Node(x);
			Node *yn = new Node(y);

			// nullなら新しく入れる
			if (l[x] == nullptr) l[x] = xn;
			if (l[y] == nullptr) l[y] = yn;

			// 電車 x の後部と、電車 y の前部を連結させる。
			l[x]->next = l[y];
			l[y]->prev = l[x];
		}

		if (qi == 2) {
			int x, y; cin >> x >> y;
			l[x]->next = nullptr;
			l[y]->prev = nullptr;
		}

		if (qi == 3) {
			deque<int> deq;
      int x; cin >> x;
			Node *start = l[x];
			int cnt = 0;
			if (start != nullptr) {
				deq.push_back(start->value);
				cnt++;
			} else {
				cout << 1 << " " << x << endl;
				continue;
			}
			Node *prevs = start->prev;
			Node *nexts = start->next;
			while (prevs != nullptr) {
				cnt++;
				deq.push_front(prevs->value);
				prevs = prevs->prev;
			}
			while (nexts != nullptr) {
				cnt++;
				deq.push_back(nexts->value);
				nexts = nexts->next;
			}
			cout << cnt << " ";
			for (auto v: deq) {
				cout << v << " ";
			}
			cout << endl;
		}
	}

	return 0;
}

