// 알고리즘 기초 3 p.56
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int n;
	cin >> n;
	int p[1001] = { 0 };
	int d[1001] = { 0 };
	for (int i = 1; i <= n; i++) 
		scanf("%d", &p[i]);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++)
			d[i] = max(d[i], d[i - j] + p[j]);
	}
	cout << d[n] << endl;
}