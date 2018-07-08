#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
int count; 
int h[101][101];
vector<pair<int, int> > v;
void hanoi(int from, int to, int n) {
	if (n == 0)
		return;
	::count += 1;
	hanoi(from, 6 - from - to, n - 1);
	//v.push_back({ from,to });
	printf("%d %d\n", from, to);
	hanoi(6 - from - to, to, n - 1);
}
int main() {
	int n;
	cin >> n;
	
	long long ans = 1;
	for (int i = 0; i < n; i++)
		ans *= 2;
	cout << ans - 1 << '\n';
	if (n <= 20) {
		hanoi(1, 3, n);
		for (int i = 0; i < v.size(); i++) {
			cout << v[i].first << ' ' << v[i].second << '\n';
		}
		return 0;
	}
}