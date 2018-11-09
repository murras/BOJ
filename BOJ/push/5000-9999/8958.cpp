#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
void solve();
int main() {
	int n;
	cin >> n;
	while (n--) {
		solve();
	}
}

void solve() {
	string s;
	cin >> s;
	int stack = 0;
	int score = 0;
	for (int j = 0; j < s.size(); j++) {
		if (s[j] == 'X') {
			stack = 0;
		}
		else {
			stack++;
			score += stack;
		}
	}
	cout << score << '\n';
}