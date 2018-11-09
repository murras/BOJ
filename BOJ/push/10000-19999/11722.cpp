// 알고리즘 기초 3
#include <iostream>
using namespace std;
int a[1001];
int d[1001];
int main() {
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++)
		scanf("%d", &a[i]);
	d[1] = 1;
	for (int i = 2; i <= t; i++) {
		d[i] = 1;
		for (int j = 0; j < i; j++) {
			if (a[j] > a[i] && d[i] < d[j] + 1)
				d[i] = d[j] + 1;
		}
	}
	int ans = d[1];
	for (int i = 2; i <= t; i++)
		if (ans < d[i])
			ans = d[i];
	cout << ans << '\n';
}