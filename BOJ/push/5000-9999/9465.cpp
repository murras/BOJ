// 알고리즘 기초 3 p.81
#include <iostream>
#include <algorithm>
using namespace std;
long long a[2][100001];
long long d[3][100001];
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		scanf("%d", &n);
		for (int i = 1; i <= n; i++) 
			scanf("%lld", &a[0][i]);
		for (int i = 1; i <= n; i++)
			scanf("%lld", &a[1][i]);
		d[0][0] = d[1][0] = d[2][0] = 0;
		for (int i = 1; i <= n; i++) {
			d[0][i] = max(d[1][i-1], d[2][i-1]) + a[0][i];
			d[1][i] = max(d[0][i - 1], d[2][i - 1]) + a[1][i];
			d[2][i] = max(d[0][i - 1], max(d[1][i - 1], d[2][i - 1]));
		}
		long long ans = 0;
		for (int i = 1; i <= n; i++)
			ans = max(max(ans, d[0][i]), max(d[1][i], d[2][i]));
		printf("%lld\n", ans);
	}
}