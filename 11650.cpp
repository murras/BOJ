// STL 5 p.42
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
	vector<pair<int, int> > v;
	int n;
	cin >> n;
	while (n--) {
		int x, y;
		cin >> x >> y;
		v.push_back({ x,y });
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++)
		printf("%d %d\n", v[i].first, v[i].second);
}