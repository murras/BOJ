#include <iostream>
using namespace std;
int main() {
	int n, min, max, temp;
	cin >> n;
	cin >> temp;
	n--;
	min = max = temp;
	while (n--) {
		cin >> temp;
		if (temp < min)
			min = temp;
		if (temp > max)
			max = temp;
	}
	cout << min << ' ' << max << endl;
}