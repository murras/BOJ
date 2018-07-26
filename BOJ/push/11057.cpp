// 알고리즘 기초 3 p.68
#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	long long a = 10007;
	long long r = 0;
	int d[1001][10] = { 0 };
	for (int i = 0; i <= 9; i++)
		d[1][i] = 1;
	for (int i = 2; i <= n; i++) {
		for (int j = 0; j <= 9; j++) {
			for (int k = 0; k <= j; k++) {
				d[i][j] += d[i - 1][k];
				d[i][j] %= a;
			}
		}
	}
	for (int i = 0; i < 10; i++)
		r += d[n][i];
	r %= a;
	cout << r << endl;
}