// 알고리즘 고급 Ch4
#include <iostream>
using namespace std;
bool d[1001];
int main() {
	int n;
	cin >> n;
	d[0] = false;
	for (int i = 1; i <= 1000; i++) {
		d[i] = false;
		if (i - 1 >= 0 && d[i - 1] == false)
			d[i] = true;
		if (i - 3 >= 0 && d[i - 3] == false)
			d[i] = true;
	}
	if (d[n])
		cout << "SK" << '\n';
	else
		cout << "CY" << '\n';
}