#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;
int main() {
	string s;
	cin >> s;
	int n = s.size();
	string * sp = new string[n];

	for (int i = 0; i < n; i++) {
		sp[i] = s.substr(i);
	}
	sort(sp, sp + n);
	for (int i = 0; i < n; i++) {
		cout << sp[i] << endl;
	}
}