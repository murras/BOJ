#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	vector<int> graph(n + 1);
	for (int i = 0; i < m; i++) {
		int a, b;
		scanf(" %d %d", &a, &b);
		graph[a]++;
		graph[b]++;
	}
	for (int i = 1; i <= n; i++)
		printf("%d\n", graph[i]);
}