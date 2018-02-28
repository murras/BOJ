// 알고리즘 기초 6 p.73
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
using namespace std;
bool check[1001];
void BFS(int n);
void DFS(int n);
vector<int> ve[1001];
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n, m, v;
	cin >> n >> m >> v;
	for (int i = 0; i < m; i++) {
		int from, to;
		cin >> from >> to;
		ve[from].push_back(to);
		ve[to].push_back(from);
	}
	for (int i = 1; i <= n; i++) {
		sort(ve[i].begin(), ve[i].end());
	}
	DFS(v);
	cout << '\n';
	BFS(v);
	cout << '\n';
}
void BFS(int n) {
	for (int i = 0; i < 1001; i++)
		check[i] = false;
	queue<int> q;
	q.push(n);
	check[n] = true;
	while (!q.empty()) {
		int next = q.front();
		q.pop();
		cout << next << ' ';
		for (int i = 0; i < ve[next].size(); i++) {
			int next2 = ve[next][i];
			if (check[next2] == false) {
				q.push(next2);
				check[next2] = true;
			}
		}
	}
}
void DFS(int n) {
	check[n] = true;
	cout << n << ' ';
	for (int i = 0; i < ve[n].size(); i++) {
		int next = ve[n][i];
		if (check[next] == false)
			DFS(next);
	}
}