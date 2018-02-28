// STL 3 p.54
#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
	int n, m, c;
	scanf("%d", &n);
	unordered_map<int, int> ma;
	
	while (n--) {
		scanf(" %d ", &c);
		ma[c]++;
	}
	scanf("%d ", &m);
	while (m--) {
		scanf("%d", &c);
		printf("%d ", ma[c]);
	}
	printf("\n");
}