// 알고리즘 기초 2 p.20
#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main() {
	stack<int> st;
	string s;
	int i = 0;
	int sum = 0;
	cin >> s;
	for(int i=0; i<s.size();i++){
		if (s[i] == '(')
			st.push(i);
		else if (s[i] == ')') {
			if (st.top() + 1 == i) {
				st.pop();
				sum += st.size();
			}
			else {
				st.pop();
				sum++;
			}
		}		
	}
	cout << sum << endl;
	return 0;
}