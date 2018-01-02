// STL 2 p.30
#include <iostream>
#include <functional>
#include <vector>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	vector<function<int(int, int)> > d;
	d.push_back([](int x, int y) {
		return x + y;
	});
	d.push_back([](int x, int y) {
		return x - y;
	});
	d.push_back([](int x, int y) {
		return x*y;
	});
	d.push_back([](int x, int y) {
		return x / y;
	});
	d.push_back([](int x, int y) {
		return x % y;
	});
	for (auto &f : d) {
		cout << f(a, b) << "\n";
	}
}