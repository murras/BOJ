// 알고리즘 기초 4 p.45
#include <iostream>
using namespace std;
bool prime(int n) {
	if (n < 2)
		return false;
	for (int i = 2; i*i <= n; i++)
		if (n%i == 0)
			return false;
	return true;
}
int main() {
	int n;
	cin >> n;
	int count = 0;
	while (n--) {
		int m;
		cin >> m;
		if (prime(m))
			count++;
	}
	cout << count << '\n';
}