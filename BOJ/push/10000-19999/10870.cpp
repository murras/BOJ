// STL 2 p.29
#include <iostream>
#include <functional>
using namespace std;
int main() {
	int n;
	cin >> n;
	function<int(int)> fib = [&](int n) {
		if (n <= 1) return n;
		else return fib(n - 1) + fib(n - 2);
	};
	cout << fib(n) << endl;
}
