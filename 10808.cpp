// STL 5 p.7
// 알고리즘 기초 2 p.51
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
	string s;
	cin >> s;
	for (int i = 'a'; i <= 'z'; i++) {
		cout << count(s.begin(), s.end(), i) << ' ';
	}
	cout << '\n';
}