// 알고리즘 기초 4 p.69
#include <iostream>
using namespace std;
long long f[13];
int main() {
	int n;
	cin >> n;
	f[0] = 1ll;
	for (int i = 1; i <= n; i++)
		f[i] = (long long)(f[i - 1] * i);
	cout << f[n] << '\n';
}