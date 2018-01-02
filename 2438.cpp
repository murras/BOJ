// 알고리즘 기초 1 p.39
#include <iostream>
#include <cstdio>
using namespace std;
int main(void) {
	int i, j, n;
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		for (j = 0; j < i; j++)
			printf("*");

		printf("\n");
	}

	return 0;
}