// 알고리즘 기초 4 p.60
#include <iostream>
using namespace std;
const int max = 1000000;
int prime[1000000];
bool check[1000001];
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int p = 0;
	for (int i = 2; i*i <= 1000000; i++) {
		if (check[i] == false) {
			prime[p] = i;
			p++;
			for (int j = i + i; j <= 1000000; j += i)
				check[j] = true;
		}
	}
	while (true) {
		int n;
		cin >> n;
		if (n == 0)
			break;
		for (int i = 1; i < p; i++)
			if (check[n - prime[i]] == false) {
				cout << n << " = " << prime[i] << " + " << n - prime[i] << '\n';
				break;
			}
	}
}