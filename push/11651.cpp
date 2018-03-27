// STL 5 p.48
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool cmp(const pair<int, int> &p1, const pair<int, int> &p2) {
	if (p1.second == p2.second)
		return p1.first < p2.first;
	else
		return p1.second < p2.second;
}
int main() {
	int n;
	cin >> n;
	vector<pair<int, int> > v(n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &v[i].first, &v[i].second);
	}
	sort(v.begin(), v.end(), cmp);
	for (auto &x : v)
		cout << x.first << ' ' << x.second << '\n';
}