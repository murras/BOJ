// STL 4 p.7
// 알고리즘 기초 2 p.53
#include <iostream>
#include <string>
using namespace std;
int main() {
	string s;
	int lower = 0, upper = 0, number = 0, space = 0;
	while (getline(cin, s)) {
		int lower = 0, upper = 0, number = 0, space = 0;
		for (char x : s)
		{
			if (x >= 'a'&&x <= 'z')
				lower++;
			else if (x >= 'A'&&x <= 'Z')
				upper++;
			else if (x >= '0'&&x <= '9')
				number++;
			else
				space++;
		}
		cout << lower << ' ' << upper << ' '
			<< number << ' ' << space << endl;
	}
}