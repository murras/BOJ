// 알고리즘 기초 3 p.175
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
long long d[5001];
char s[5001];
int mod = 1000000;
int main() {
	scanf("%s", s + 1);
	int n = strlen(s + 1);
	d[0] = 1;
	for (int i = 1; i <= n; i++) {
		int x = s[i] - '0';
		if (x >= 1 && x <= 9)
			d[i] = (d[i] + d[i - 1]) % mod;
		if (i == 1)
			continue;
		if (s[i - 1] == '0')// 첫 자리에서 길이 2인 암호가 올수 없다
			continue;
		x = (s[i - 1] - '0') * 10 + (s[i] - '0');
		if (x >= 10 && x <= 26)
			d[i] = (d[i] + d[i - 2]) % mod;
	}
	cout << d[n] << '\n';
}
