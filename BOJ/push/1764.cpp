// STL 3 p.62
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
	int n, m;
	scanf("%d %d\n", &n, &m);
	map<string, int> ma;
	string s;
	for (int i = 0; i<n; i++) {
		cin >> s;
		ma[s] += 1;
	}
	for (int i = 0; i < m; i++) {
		cin >> s;
		ma[s] += 1;
	}
	int re = 0;
	for (auto &p:ma) {
		if (p.second == 2)
			re++;
	}
	cout << re << endl;
	for (auto &p : ma) {
		if (p.second == 2)
			cout << p.first << endl;
	}
	return 0;
}