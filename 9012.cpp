// 알고리즘 기초 2 p.8
#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main() {
	stack<char> st1;
	int n;
	cin >> n;
	while (n--) {
		string s;
		cin >> s;
		int c = 0;
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == '(')
				st1.push(s[i]);
			else if (s[i] == ')') {
				if (!st1.empty())
					st1.pop();
				else
					c = -1;
			}
		}

		if (!st1.empty() || c == -1)
			cout << "NO" << endl; 
		else cout << "YES" << endl;

		while (!st1.empty())
			st1.pop();
	}
}