// 알고리즘 기초 1 p.38
#include <iostream>
#include <string>
using namespace std;
int main() {
	int day[13] = { 0,31,28,31,30,31,30,31,31,30,31, 30, 31 };
	string str[7] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };
	int a, b;
	cin >> a >> b;
	for (int i = 1; i < a; i++) {
		day[0] += day[i];
	}
	day[0] += b;
	day[0] %= 7;
	cout << str[day[0]] << endl;
}