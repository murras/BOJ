// �˰��� ���� p.170
#include <iostream>
using namespace std;
long long d[201][201];
int main() {
	int n, k;
	cin >> n >> k;
	d[0][0] = 1ll;
	for (int i = 1; i <= k; i++) {
		for (int j = 0; j <= n; j++) {
			for (int l = 0; l <= j; l++) {
				d[i][j] += d[i - 1][j - l];
				d[i][j] %= 1000000000ll;
			}
		}
	}
	cout << d[k][n] << '\n';
}