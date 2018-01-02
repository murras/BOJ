// 알고리즘 기초 3 p.52
#include <iostream>
using namespace std;
int d[11];
int main() {
	int T;
	cin >> T;
	d[1] = 1;
	d[2] = 2;
	d[3] = 4;
	for (int i = 4; i <= 11; i++)
		d[i] = d[i - 1] + d[i - 2] + d[i - 3];
	while (T--) {
		int n;
		cin >> n;
		cout << d[n] << endl;
	}
}