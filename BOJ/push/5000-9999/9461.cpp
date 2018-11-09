// 알고리즘 기초 p.169
#include <iostream>
using namespace std;
long long int d[101];
int main() {
	int t;
	cin >> t;
	d[1] = d[2] = d[3] = 1;
	d[4] = d[5] = 2;
	while (t--) {
		int n;
		cin >> n;
		for (int i = 6; i <= n; i++) {
			d[i] = d[i - 1] + d[i - 5];
		}
		cout << d[n] << '\n';
	}	
}