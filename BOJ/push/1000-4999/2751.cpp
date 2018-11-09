// 알고리즘 기초 5 p.5
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
	int n;
	cin >> n;
	vector<int> v;
	while (n--) {
		int num;
		cin >> num;
		v.push_back(num);
	}
	sort(v.begin(), v.end());
	for (auto & i : v)
		cout << i << '\n';
}