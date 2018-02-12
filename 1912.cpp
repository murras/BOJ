// 알고리즘 기초 3 p.128
#include <iostream>
#include <algorithm>
using namespace std;
int a[100001];
int d[100001];
int main() {
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++)
		scanf("%d", &a[i]);
	d[1] = a[1];
	for (int i = 2; i <= t; i++) {
		d[i] = max(d[i - 1] + a[i], a[i]);
	}
	int ans = d[1];
	for (int i = 2; i <= t; i++)
		ans = max(d[i], ans);
	cout << ans << '\n';
}