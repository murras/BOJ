// 알고리즘 기초 3 p.72
#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	long long d[91] = { 0,1,1 };
	for (int i = 3; i <= n; i++) {
		d[i] = d[i - 2] + d[i - 1];
	}
	cout << d[n] << endl;
}