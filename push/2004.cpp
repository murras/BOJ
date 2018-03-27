// 알고리즘 기초 4 p.78
#include <iostream>
#include <algorithm>
using namespace std;
void c(long long &n, long long &two, long long &five) {
	two = 0;
	five = 0;
	for (long long i = 2; i <= n; i *= 2) 
		two += n / i;
	for (long long i = 5; i <= n; i *= 5)
		five += n / i;
}
int main() {
	long long n, m, two, five;
	two = five = 0;
	cin >> n >> m;
	long long nmm = (long long)(n - m);
	long long up_two, down1_two, down2_two, up_five, down1_five, down2_five;
	c(n, up_two, up_five);
	c(m, down1_two, down1_five);
	c(nmm, down2_two, down2_five);
	
	cout << (long long)min(up_two - down1_two - down2_two, up_five - down1_five - down2_five) << '\n';
	
	
}