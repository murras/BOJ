// 알고리즘 중급 Part1
#include <iostream>
using namespace std;
char star[5000][7000];
void divide(int row, int col, int n) {
	if (n == 3) {
		star[row][col + 2] = '*';
		star[row + 1][col + 1] = '*';
		star[row + 1][col + 3] = '*';
		for (int i = 0; i < 5; i++)
			star[row + 2][col + i] = '*';
	}
	else {
		divide(row, col + n / 2, n / 2);
		divide(row + n / 2, col, n / 2);
		divide(row + n / 2, col + n, n / 2);
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	for (int col = 0; col < 2 * n; col++)
		for (int row = 0; row < n; row++)
			star[row][col] = ' ';
	divide(0, 0, n);
	for (int row = 0; row < n; row++) {
		for (int col = 0; col < 2 * n-1; col++)
			cout << star[row][col];
		cout << '\n';
	}
	
}