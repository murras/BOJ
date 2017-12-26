#include <iostream>
using namespace std;
int gcd(int x, int y) {
	if (y == 0)
		return x;
	return gcd(y, x%y);
}
int main() {
	int n, n1, i, j;
	int arr[100];
	long long ans;
	cin >> n;
	while (n--) {
		
		scanf("%d", &n1);
		for (i = 0; i < n1; i++)
			scanf("%d", &arr[i]);
		ans = 0;
		for (i = 0; i < n1-1; i++) 
			for (j = i + 1; j < n1; j++) 
				ans += gcd(arr[i], arr[j]);
			
		printf("%lld\n", ans);
	}
}