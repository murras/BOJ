// 알고리즘 기초 3
#include <iostream>
#include <algorithm>
using namespace std;
int s[301];
int d[301];
int main() {
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++)
		scanf("%d", &s[i]);
	d[0] = 0;
	d[1] = s[1];
	d[2] = s[1] + s[2];
	for (int i = 3; i <= t; i++) {
		d[i] = max(d[i - 2] + s[i], d[i - 3] + s[i] + s[i - 1]);
	}
	cout << d[t] << '\n';
}