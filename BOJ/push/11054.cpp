// 알고리즘 기초 3
#include <iostream>
#include <algorithm>
using namespace std;
int a[1001];
int d_inc[1001];
int d_dec[1001];
int main() {
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++)
		scanf("%d", &a[i]);

	for (int i = 1; i <= t; i++) {
		d_inc[i] = 1;
		for (int j = 0; j < i; j++) {
			if (a[j] < a[i] && d_inc[i] < d_inc[j] + 1)
				d_inc[i] = d_inc[j] + 1;
		}
	}

	for (int i = t; i > 0; i--) {
		d_dec[i] = 1;
		for (int j = i; j <= t; j++) {
			if (a[i] > a[j] && d_dec[j] + 1 > d_dec[i])
				d_dec[i] = d_dec[j] + 1;
		}
	}
	//cout << d_inc[8] << d_dec[8] << endl;
	int ans = 0;
	for (int i = 1; i <= t; i++) {
		if (ans < d_inc[i] + d_dec[i] - 1) {
			ans = d_inc[i] + d_dec[i] - 1;
		}
	}

	printf("%d\n", ans);
}
