// STL 5 p.35
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int n;
	cin >> n;
	vector<int> v;
	while (n--) {
		int x;
		cin >> x;
		v.push_back(x);
	}
	sort(v.begin(), v.end());
	for (auto x : v)
		cout << x << ' ';
	cout << '\n';
}