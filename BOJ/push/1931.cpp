// 알고리즘 중급 Part1 1
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct m {
	int begin, end;
};
bool cmp(const m &a, const m&b) {
	if (a.end == b.end)
		return a.begin < b.begin;
	else
		return a.end < b.end;
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<m> t;
	while (n--) {
		struct m temp;
		cin >> temp.begin >> temp.end;
		t.push_back(temp);
	}
	sort(t.begin(), t.end(), cmp);
	int current = 0;
	int result = 0;
	for (int i = 0; i < t.size(); i++) {
		if (current <= t[i].begin) {
			current = t[i].end;
			result++;
		}
	}
	cout << result << '\n';
}