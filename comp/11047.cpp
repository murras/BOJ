// 알고리즘 중급 Part 1 1
#include <iostream>
using namespace std;
int main() {
	int n, k;
	cin >> n >> k;
	int arr[11];
	for (int i = 1; i <= n; i++) 
		scanf("%d", &arr[i]);
	int result = 0;
	for (int i = n; i > 0; i--) {
		result += k / arr[i];
		k %= arr[i];
	}
	cout << result << '\n';
}