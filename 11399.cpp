// 알고리즘 중급 Part1 1
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> v;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int input;
		cin >> input;
		v.push_back(input);
	}
	sort(v.begin(), v.end());
	int result = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			result += v[j];
		}
	}
	cout << result << '\n';
}