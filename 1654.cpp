// 알고리즘 중급 Part1
#include <iostream>
using namespace std;
long long a[10000];
int m;
bool check(long long x, int &n) {
	int count = 0;
	for (int i = 0; i < n; i++)
		count += a[i] / x;
	return count >= m;
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n >> m;
	long long max = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (max < a[i])
			max = a[i];
	}
	long long ans = 0;
	long long l = 1;
	long long r = max;
	while (l <= r) {
		long long mid = (l + r) / 2;
		if (check(mid, n)) {
			if (ans < mid)
				ans = mid;
			l = mid + 1;
		}
		else
			r = mid - 1;
	}
	cout << ans << '\n';
}