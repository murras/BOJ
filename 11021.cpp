#include <iostream>
using namespace std;
int main() {
	int n, a, b, i = 0;
	cin >> n;
	while (n--) {
		i++;
		cin >> a >> b;
		cout << "Case #" << i << ": " << a + b << endl;
	}
}