// 알고리즘 기초 3 p.97
#include <iostream>
using namespace std;
int a[1001];
int d[1001];
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);

	for (int i = 0; i < n; i++) {
		d[i] = 1;
		for (int j = 0; j < i; j++) {
			if (a[j] < a[i] && d[i] < d[j] + 1)
				d[i] = d[j] + 1;
		}
	}
	int max = d[0];
	for (int i = 0; i < n; i++)
		if (max < d[i])
			max = d[i];
	cout << max << endl;
}