// �˰��� �߱� Part1
#include <iostream>
using namespace std;
int p2(int k) {
	return 1 << k;
}
int divide(int n, int row, int col) {
	if (n == 1)
		return 2 * row + col;
	else {
		int plus = p2(2 * n - 2); // 한 블럭의 크기 (1/4)
		if (row < p2(n - 1)) {
			if (col < p2(n - 1))
				return divide(n - 1, row, col);
			else
				return divide(n - 1, row, col - p2(n - 1)) + plus;
		}
		else {
			if (col < p2(n - 1))
				return divide(n - 1, row - p2(n - 1), col) + plus * 2;
			else
				return divide(n - 1, row - p2(n - 1), col - p2(n - 1)) + plus * 3;
		}
	}
	
}
int main() {
	int n, r, c;
	cin >> n >> r >> c;
	cout << divide(n, r, c) << '\n';
}