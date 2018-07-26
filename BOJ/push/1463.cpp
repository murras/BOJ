// �˰��� ���� 3 p.32
#include <iostream>
using namespace std;
int d[1000000];
int dpt(int n) { // top-down
	if (n == 1)
		return 0;
	if (d[n] > 0)
		return d[n];
	d[n] = dpt(n - 1) + 1;
	if (n % 2 == 0) {
		int temp = dpt(n / 2) + 1;
		if (d[n] > temp)
			d[n] = temp;
	}
	if (n % 3 == 0) {
		int temp = dpt(n / 3) + 1;
		if (d[n] > temp)
			d[n] = temp;
	}
	return d[n];
}
int dpb(int n) { // bottom-up
	d[1] = 0;
	for (int i = 2; i <= n; i++) {
		d[i] = d[i - 1] + 1;
		if (i % 2 == 0 && d[i] > d[i / 2] + 1)
			d[i] = d[i / 2] + 1;
		if (i % 3 == 0 && d[i] > d[i / 3] + 1)
			d[i] = d[i / 3] + 1;
	}
	return d[n];
}
int main() {
	int n;
	cin >> n;
	//cout << dpt(n) << endl;
	cout << dpb(n) << endl;
}
