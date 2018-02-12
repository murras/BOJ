// 알고리즘 중급 Part1
#include <iostream>
using namespace std;
void star1(char **star, int x, int y, int n) {
	int i, j;
	if (n == 1) 
		star[x][y] = '*';
	else {
		int next = n / 3;
		for (i = 0; i < 3; i++) {
			for (j = 0; j < 3; j++) {
				if (!(i == 1 && j == 1))
					star1(star, x + (i*next), y + (j*next), next);
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int i, j;
	char **star;
	star = new char*[n];
	for (i = 0; i < n; i++) {
		star[i] = new char[n];
	}
	for (i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			star[i][j] = ' ';
	}
	star1(star, 0, 0, n);
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++)
			cout << star[i][j];
		cout << '\n';
	}
}