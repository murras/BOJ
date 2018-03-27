// 알고리즘 기초 3 p.64
#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	long long a = 1000000000;
	int d[101][10] = { 0 };
	for (int i = 1; i <= 9; i++)
		d[1][i] = 1;
	for (int i = 2; i <= n; i++) {
		for (int j = 0; j <= 9; j++) {
			d[i][j] = 0;
			if (j - 1 >= 0)
				d[i][j] += d[i - 1][j - 1];
			if (j + 1 <= 9)
				d[i][j] += d[i - 1][j + 1];
			d[i][j] %= a;
		}
	}
	long long r = 0;
	for (int i = 0; i <= 9; i++) {
		r += d[n][i];
	}
	r %= a;
	cout << r << endl;
}