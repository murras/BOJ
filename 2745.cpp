// 알고리즘 기초 4 p.24
#include <iostream>
#include <string>
using namespace std;
int main() {
	string n;
	int b;
	int l = 0;
	cin >> n >> b;

	for (int i = 0; i < n.size();i++) {
		if ((n[i] >= '0') && (n[i] <= '9'))
			l = l * b + (n[i] - '0');
		else
			l = l * b + (n[i] - 'A' + 10);
	}
	cout << l << '\n';
}