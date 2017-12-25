#include <iostream>
#include <string>
using namespace std;
int main() {
	int s1, s2, s3, s4;
	cin >> s1 >> s2 >> s3 >> s4;
	string st = to_string(s1) + to_string(s2);
	string st2 = to_string(s3) + to_string(s4);
	
	long long sum1= stoll(st);
	long long sum2 = stoll(st2);
	cout << sum1 + sum2 << endl;
}