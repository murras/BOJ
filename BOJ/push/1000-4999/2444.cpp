// 알고리즘 기초 1 p.39
#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n - 1; i++) {
		for (int j = 1; j < n - i; j++)
			printf(" ");
		for (int j = 0; j < 2 * i + 1; j++)
			printf("*");
		printf("\n");
	}
	for (int i = 0; i < 2 * n - 1; i++)
		printf("*");
	printf("\n");
	for (int i = n-2; i >= 0 ; i--) {
		for (int j = 1; j < n - i; j++)
			printf(" ");
		for (int j = 2 * i +1; j > 0; j--)
			printf("*");
		printf("\n");
	}
}