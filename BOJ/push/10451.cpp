// �˰��� ���� 6
#include <iostream>
using namespace std;
int vec[1001];
bool c[1001];

void dfs(int n) {
	if (c[n])
		return;
	c[n] = true;
	dfs(vec[n]);
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		for (int i = 1; i <= n; i++) {
			cin >> vec[i];
		}
		int r = 0;
		for (int i = 1; i <= n; i++) {
			if (c[i] == false) {
				dfs(i);
				r++;
			}
		}
		cout << r << '\n';
	}
}