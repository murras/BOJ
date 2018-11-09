#include <iostream>
using namespace std;
int gcd(int, int);
int main() {
	int n;
	cin >> n;
	while (n--) {
		int x, y;
		cin >> x >> y;
		int l = ((x*y) / gcd(x, y));
		cout << l << endl;
	}
}
int gcd(int x, int y) {
	if (y == 0)
		return x;
	return gcd(y, x%y);
}