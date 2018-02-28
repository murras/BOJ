// STL 5
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
struct person {
	int n;
	string s;
};
bool cmp(const person &a, const person& b) {
	return a.n < b.n;
}
int main() {
	int n;
	cin >> n;
	vector<person> v;
	while (n--) {
		int n;
		string s;
		cin >> n >> s;
		person p;
		p.n = n;
		p.s = s;
		v.push_back(p);
	}
	stable_sort(v.begin(), v.end(), cmp);

	for (auto &x : v)
		cout << x.n << " " << x.s << '\n';
}