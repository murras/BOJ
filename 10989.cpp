// 알고리즘 기초 5
#include <iostream>
#include <cstdio>
using namespace std;
int arr[10001];
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		arr[num]++;
	}
	for (int i = 0; i <= 10000; i++) {
		for (int j = 0; j < arr[i]; j++)
			cout << i << '\n';
	}
}