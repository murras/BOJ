// 알고리즘 기초 5 
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
	int n;
	cin >> n;
	vector<pair<int, int> > v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i].first;
		v[i].second = i;
	}
	sort(v.begin(), v.end());
	int r = 0;
	for (int i = 0; i < n; i++) {
		if (r < v[i].second - i)
			r = v[i].second - i;
		
	}
	cout << r + 1 << '\n';
}