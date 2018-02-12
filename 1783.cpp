// 알고리즘 중급 Part1 1
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int main() {
	int n, m;
	cin >> n >> m;
	if (n == 1)
		cout << 1 << '\n';
	else if (n == 2) 
		cout << min(4, (m + 1) / 2) << '\n';
	else {
		if (m < 7)
			cout << min(4, m) << '\n';
		else
			cout << m - 2 << '\n';
	}
}