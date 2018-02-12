// 알고리즘 기초 4 p.35
#include <iostream>
#include <stack>
using namespace std;
int main() {
	int a, b, m;
	stack<int> s;
	int before = 0, end = 0;
	cin >> a >> b >> m;
	for (int i = 0; i < m; i++) {
		int n;
		scanf("%d", &n);
		before = before * a + n;
	}
	while (before) {
		s.push(before%b);
		before /= b;
	}
	while (!s.empty()) {
		printf("%d ", s.top());
		s.pop();
	}
}