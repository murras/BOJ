// STL 3 p.74
// 알고리즘 기초 2 p.35
#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
	queue<int> q;
	int n, num;
	string cmd;
	cin >> n;

	while (n--) {
		cin >> cmd;
		if (cmd == "push") {
			cin >> num;
			q.push(num);
		}
		else if (cmd == "pop") {
			if (q.empty())
				cout << -1 << endl;
			else {
				cout << q.front() << endl;
				q.pop();
			}
		}
		else if (cmd == "size") {
			cout << q.size() << endl;
		}
		else if (cmd == "empty") {
			if (q.empty())
				cout << 1 << endl;
			else cout << 0 << endl;
		}
		else if (cmd == "front") {
			if (q.empty())
				cout << -1 << endl;
			else cout << q.front() << endl;
		}
		else if (cmd == "back") {
			if (q.empty())
				cout << -1 << endl;
			else cout << q.back() << endl;
		}
	}

}