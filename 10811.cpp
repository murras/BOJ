// STL 5 p.18
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int n, m;
	cin >> n >> m;
	vector<int> v(n, 0);
	for (int i = 0; i < n; i++)
		v[i] = i + 1;
	while (m--) {
		int i, j;
		cin >> i >> j;
		reverse(v.begin() + i - 1, v.begin() + j);
	}
	for (auto x : v)
		cout << x << ' ';
	cout << '\n';
}