// 알고리즘 기초 1 p.39
#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i - 1; j++)
			printf(" ");
		printf("*");
		if (i == n - 1)
			for (int j = 0; j < i * 2; j++)
				printf("*");
		else if (i){
			for (int j = 0; j < i * 2 - 1; j++)
				printf(" ");
			printf("*");
		}
		printf("\n");
	}
}