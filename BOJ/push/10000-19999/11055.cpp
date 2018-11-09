// 알고리즘 기초 3
#include <iostream>
#include <algorithm>
using namespace std;
int a[1001];
int d[1001];
int main() {
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++)
		scanf("%d", &a[i]);
	d[1] = a[1];
	for (int i = 2; i <= t; i++) {
		d[i] = a[i];
		for (int j = 0; j < i; j++) {
			if (a[j] < a[i] && d[i] < d[j] + a[i])
				d[i] = d[j] + a[i];
		}
	}
	int ans = d[1];
	for (int i = 2; i <= t; i++)
		if (ans < d[i])
			ans = d[i];
	cout << ans << '\n';
}