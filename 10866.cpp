#include <iostream>
#include <deque>
#include <string>
using namespace std;
int main() {
	int n;
	cin >> n;
	deque<int> de;
	while (n--) {
		string cmd;
		cin >> cmd;
		int i;
		if (cmd == "push_front") {
			cin >> i;
			de.push_front(i);
		}
		else if (cmd == "push_back") {
			cin >> i;
			de.push_back(i);
		}
		else if (cmd == "pop_front") {
			if (!de.empty()) {
				cout << de.front() << endl;
				de.pop_front();
			}
			else
				cout << "-1" << endl;
		}
		else if (cmd == "pop_back") {
			if (!de.empty()) {
				cout << de.back() << endl;
				de.pop_back();
			}
			else
				cout << "-1" << endl;
		}
		else if (cmd == "size") {
			cout << de.size() << endl;
		}
		else if (cmd == "empty") {
			if (de.empty())
				cout << "1" << endl;
			else
				cout << "0" << endl;
		}
		else if (cmd == "front") {
			if (!de.empty()) {
				cout << de.front() << endl;
			}
			else cout << "-1" << endl;
		}
		else if (cmd == "back") {
			if (!de.empty()) {
				cout << de.back() << endl;
			}
			else cout << "-1" << endl;
		}
	}
}