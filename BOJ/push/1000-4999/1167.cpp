// 알고리즘 기초 Ch7
// 루트에서 가장 먼 정점을 구하고 
// 그 정점으로부터 모든 정점간의 거리를 구한다.
// 가장 큰 값인 정점이 지름이다.
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <queue>
#include <vector>
using namespace std;
bool check[100001];
int dist[100001];
vector<pair<int, int> > ve[100001];

void bfs(int n) {
	memset(dist, 0, sizeof(dist));
	memset(check, 0, sizeof(check));

	queue<int> q;
	check[n] = true;
	q.push(n);

	while (!q.empty()) {
		int x = q.front();
		q.pop();
		for (int i = 0; i < ve[x].size(); i++) {
			int t = ve[x][i].first;
			int c = ve[x][i].second;
			if (check[t] == false) {
				dist[t] = dist[x] + c;
				q.push(t);
				check[t] = true;
			}
		}
	}
}

int main() {
	int v;
	scanf("%d", &v);

	for (int i = 1; i <= v; i++) {
		int ver;
		scanf("%d", &ver);
		while (true) {
			int to, dis;
			scanf("%d", &to);
			if (to == -1)
				break;
			scanf("%d", &dis);
			ve[ver].push_back(make_pair(to, dis));
		}
	}

	bfs(1);

	int max = 1;
	for (int i = 2; i <= v; i++) {
		if (dist[i] > dist[max])
			max = i;
	}
	bfs(max);
	int res = dist[1];
	for (int i = 2; i <= v; i++) {
		if (res < dist[i])
			res = dist[i];
	}
	printf("%d\n", res);
}


