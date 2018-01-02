// STL 3 p.75
// �˰��� ���� p.37
#include <iostream>
#include <queue>
#include <string>
using namespace std;
int main() {
	int n, m;
	cin >> n >> m;
	queue<int> q, a;

	for (int i = 1; i < n + 1; i++) 
		q.push(i);

	while (n--) {
		// m ��ŭ pop �ϰ� front�� a�� �ִ´� 
		for (int i = 0; i < m - 1; i++) {
			q.push(q.front());
			q.pop();
		}
		a.push(q.front());
		q.pop();
	}
	cout << "<";
	while (!a.empty()) {
		if (a.size() != 1)
			cout << a.front() << ", ";
		else
			cout << a.front() << ">";
		a.pop();
	}
}