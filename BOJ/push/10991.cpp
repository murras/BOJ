// 알고리즘 기초 1 p.39
#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < n - i; j++)
			printf(" ");
		for (int j = 0; j < 2 * i - 1; j++) {
			if (j % 2 == 0)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}