// STL 1 p.14
// 알고리즘 기초 1 p.34
#include <iostream>
#include <string>	
using namespace std;
int main() {
	string a;
	for (int i = 0; i < 100; i++) {
		getline(cin, a);
		cout << a;
		cout << endl;
	}
}