// STL 3 p.49
#include <iostream>
#include <set>
using namespace std;
int main() {
	int n;
	cin >> n;
	set<int> s;
	for (int i = 0; i < n; i++) {
		int number;
		cin >> number;
		s.insert(number);
	}
	for (auto x : s)
		cout << x << ' ';
	cout << endl;
}