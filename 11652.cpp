// 알고리즘 기초 5 p.12
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<long long> v;
	while (n--) {
		long long l;
		cin >> l;
		v.push_back(l);
	}
	sort(v.begin(), v.end());
	long long re = v[0];
	int cnt = 1, max = 1;
	for (int i = 1; i < v.size(); i++) {
		if (v[i] == v[i - 1])
			cnt++;
		else 
			cnt = 1;
		if (max < cnt) {
			max = cnt;
			re = v[i];
		}
	}
	cout << re << '\n';
}