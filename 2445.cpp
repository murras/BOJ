// 알고리즘 기초 1 p.39
#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < i; j++)
			printf("*");
		for (int j = 0; j < 2 * (n - i); j++) 
			printf(" ");
		for (int j = 0; j < i; j++)
			printf("*");
		printf("\n");
	}
	for (int i = 0; i < 2 * n; i++)
		printf("*");
	printf("\n");
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < n-i; j++)
			printf("*");
		for (int j = 0; j < 2 * i; j++)
			printf(" ");
		for (int j = 0; j < n - i; j++)
			printf("*");
		printf("\n");
	}
}