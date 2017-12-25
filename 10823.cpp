#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int main() {
	string s, s2;
	int sum = 0;
	while (cin >> s)
		s2 += s;
	istringstream sin(s2);
	string number;
	while (getline(sin, number, ','))
		sum += stoi(number);
	cout << sum << endl;
}