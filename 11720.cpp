// STL 1 p.16
#include <stdio.h>
int main() {
	int x[100];
	int n, sum;
	sum = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf(" %1d", &x[i]);
	}
	for (int i = 0; i < n; i++) {
		sum += x[i];
	}
	printf("%d\n", sum);
	return 0;
}