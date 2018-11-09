// 알고리즘 중급 Part1
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool possible(vector<int> &a, int c, int x) { 
	int count = 1;
	int last = a[0];
	for (int node : a) {
		if (node - last >= x) {
			count++;
			last = node;
		}
	}
	return count >= c;
}
int main() {
	int n, c;
	cin >> n >> c;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	sort(a.begin(), a.end());
	int l = 1;
	int r = a[n - 1] - a[0];
	int ans = 1;
	while (l <= r) {
		int mid = (l + r) / 2;
		if (possible(a, c, mid)) {
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