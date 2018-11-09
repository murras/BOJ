// STL 5 p.37
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
int main() {
	int n;
	cin >> n;
	vector<string> vs;
	while (n--) {
		string s;
		cin >> s;
		vs.push_back(s);
	}
	sort(vs.begin(), vs.end(), [](string s1, string s2) {
		if (s1.size() == s2.size())
			return s1 < s2;
		else
			return s1.size() < s2.size();
	});
	vs.erase(unique(vs.begin(), vs.end()), vs.end());
	for (auto x : vs)
		cout << x << '\n';
}