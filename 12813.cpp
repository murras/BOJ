#include <iostream>
#include <string>
#include <bitset>
using namespace std;
int main() {
	string i1, i2;
	cin >> i1 >> i2;
	bitset<100000> a(i1), b(i2);
	cout << (a & b) << endl;
	cout << (a | b) << endl;
	cout << (a ^ b) << endl;
	cout << ~a << endl;
	cout << ~b << endl;
}