// 알고리즘 중급 Part1
#include <iostream>
using namespace std;
int a[3000][3000];
int cnt[3];

bool same(int x, int y, int n) {
	for (int i = x; i < x + n; i++) {
		for (int j = y; j < y + n; j++)
			if (a[x][y] != a[i][j])
				return false;
	}
	return true;
}

void solve(int x, int y, int n) {
	if (same(x, y, n)) {
		cnt[a[x][y] + 1] += 1; // -1 0 1을 0 1 2 로 저장
		return;
	}
	int m = n / 3;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++)
			solve(x + i * m, y + j * m, m);
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
	solve(0, 0, n);
	cout << cnt[0] << '\n'
		<< cnt[1] << '\n'
		<< cnt[2] << '\n';
}