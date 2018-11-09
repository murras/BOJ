// STL 3 p.68
// 알고리즘 기초 2 p.7
#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main() {
	int n;
	string s;
	stack<int> st;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		if (s == "push") {
			int in;
			cin >> in;
			st.push(in);
		}
		else if (s == "pop") {
			if (!st.empty()) {
				cout << st.top() << endl;
				st.pop();
			}
			else
				cout << "-1" << endl;
		}
		else if (s == "top") {
			if (st.empty())
				cout << -1 << endl;
			else cout << st.top() << endl;
		}
		else if (s == "size")
			cout << st.size() << endl;
		else if (s == "empty") {
			if (st.empty())
				cout << "1" << endl;
			else
				cout << "0" << endl;;
		}
	}
}