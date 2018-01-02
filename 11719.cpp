// STL 1 p.15
// 알고리즘 기초 1 p.35
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