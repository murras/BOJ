// 알고리즘 기초 1 p.38
#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= 9; i++) {
		printf("%d * %d = %d\n", n, i, n*i);
	}
}