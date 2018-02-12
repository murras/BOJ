// 알고리즘 기초 5
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int arr[5000001];
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n, k;
	cin >> n >> k;
	k--;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	nth_element(arr, arr + k, arr + n);
	cout << arr[k] << '\n';
}