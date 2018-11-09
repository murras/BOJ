#include <stack>
#include <iostream>
#include <string>
using namespace std;
int main() { 
	int n;
	stack<char> st1;
	stack<char> st2;
	string input;
	cin >> n;
	//10828
	//10799

	while (n--) {

		cin >> input;

		for (int i = 0; i < input.size(); i++) {
			if (input[i] == '<') {
				if (!st1.empty()) {
					st2.push(st1.top());
					st1.pop();
				}
			}
			else if (input[i] == '>') {
				if (!st2.empty()) {
					st1.push(st2.top());
					st2.pop();
				}
			}
			else if (input[i] == '-') {
				if (!st1.empty()) {
					st1.pop();
				}
			}
			else {
				st1.push(input[i]);
			}
		}
		while (!st1.empty())
		{
			st2.push(st1.top());
			st1.pop();
		}
		while (!st2.empty()) {
			cout << st2.top();
			st2.pop();
		}
		cout << endl;
	}
	return 0;
}