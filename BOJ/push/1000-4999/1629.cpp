// 알고리즘 중급 Part2-2
#include <iostream>
using namespace std;
long long mul(long long a, long long b, long long c) {
	if (b == 0)
		return 1ll;
	if (b == 1)
		return a % c;
	if (b % 2 == 0) {
		long long temp = mul(a, b / 2, c);
		return (temp*temp) % c;
	}
	else
		return (a * mul(a, b - 1, c)) % c;
}
int main() {
	long long a, b, c;
	cin >> a >> b >> c;
	cout << mul(a, b, c) << '\n';
}