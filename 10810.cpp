// STL 5 p.15
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
	int n, m;
	cin >> n >> m;
	vector<int> v(n, 0);
	int i, j, k;
	while (m--) {
		cin >> i >> j >> k;
		fill(v.begin() + i - 1, v.begin() + j, k);
	}
	for (auto x : v)
		cout << x << ' ';
	cout << '\n';
}