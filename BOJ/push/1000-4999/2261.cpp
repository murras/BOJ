// 알고리즘 중급 Part1
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct point {
	int x, y;
};
vector<point> v;
bool cmp(const point &a, const point &b) {
	if (a.x == b.x)
		return a.y < b.y;
	return a.x < b.x;
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x, y;
		v.push_back({ x,y });
	}
	sort(v.begin, v.end, cmp);

}