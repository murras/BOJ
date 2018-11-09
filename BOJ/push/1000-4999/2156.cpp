// 알고리즘 기초 p.85
#include <iostream>
#include <algorithm>
using namespace std;
int g[10001];
int d[10001];
int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
		scanf("%d", &g[i]);
	
	d[1] = g[1];
	d[2] = g[1] + g[2];
	for (int i = 3; i <= n; i++) {
		d[i] = d[i - 1];
		if (d[i] < d[i - 2] + g[i])
			d[i] = d[i - 2] + g[i];
		if (d[i] < d[i - 3] + g[i - 1] + g[i])
			d[i] = d[i - 3] + g[i] + g[i - 1];
	}
	cout << d[n] << endl;
}