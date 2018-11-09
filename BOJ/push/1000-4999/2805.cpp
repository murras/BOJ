// 알고리즘 중급 Part1
#include <iostream>
using namespace std;
int n;
long long m;
long long a[1000001];
int main() {
	cin >> n >> m;
	long long l = 0, r = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (r < a[i])
			r = a[i];
	}
	long long ans = 0;
	while (l <= r) {
		long long mid = (l + r) / 2;
		long long sum = 0;
		for (int i = 0; i < n; i++) {
			if (a[i] - mid > 0)
				sum += a[i] - mid;
		}
		if (sum >= m) {
			if (ans < mid)
				ans = mid;
			l = mid + 1;
		}
		else {
			r = mid - 1;
		}
	}
	cout << ans << '\n';
}