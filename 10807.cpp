// STL 5 p.6
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int n;
	cin >> n;
	vector<int> ve;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		ve.push_back(x);
	}
	int v;
	cin >> v;
	int ans = count(ve.begin(), ve.end(), v);
	cout << ans << endl;
}