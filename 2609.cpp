#include <iostream>
using namespace std;
int main() {
	int a, b, temp, a_, b_;
	cin >> a_ >> b_;
	a = a_;
	b = b_;
	long long c;
	while (b != 0) {
		temp = a;
		a = b;
		b = temp%b;
	}
	cout << a << endl;
	cout << a_*b_ / a << endl;
	
}