// STL 3 p.54
#include <iostream>
#include <set>
using namespace std;
int main() {
	int n;
	scanf("%d", &n);	
	multiset<int> se;
	for (int i = 0; i < n; i++) {
		int x;
		scanf("%d", &x);
		se.insert(x);
	}
	int m;
	scanf("%d", &m);
	for (int i = 0; i < m; i++) {
		int x;
		scanf("%d", &x);
		printf("%d ", se.count(x));
	}
	printf("\n");
}