// STL 5 p.27
#include <algorithm>
#include <iostream>
#include <vector>
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
		swap(v[i-1], v[j-1]);
	}
	for (auto x : v)
		cout << x << ' ';
	cout << '\n';
}