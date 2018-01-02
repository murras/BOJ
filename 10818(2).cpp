// STL 5
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
	int t;
	cin >> t;
	vector<int> v;
	while (t--) {
		int n;
		cin >> n;
		v.push_back(n);
	}
	cout << *min_element(v.begin(), v.end())
		<< ' ' << *max_element(v.begin(), v.end()) << '\n';
}