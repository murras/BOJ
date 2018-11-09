// 알고리즘 기초 3 p.46
#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int d[1001] = { 0 };
	d[0] = 1;
	d[1] = 1;
	d[2] = 3;
	for (int i = 3; i <= n; i++) {
		d[i] = d[i - 1] + 2 * d[i - 2];
		d[i] %= 10007;
	}
	cout << d[n] << endl;
}