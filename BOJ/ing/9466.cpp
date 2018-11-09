#include <bits/stdc++.h>
using namespace std;
bool visited[100001];
bool belong[100001];
int stu[100001];
int memCount;
void solve();
void DFS(int);
int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
}
void solve() {
    int n;
    cin >> n;
    memset(visited, 0, sizeof(visited));
    memset(belong, 0, sizeof(belong));
    memCount = 0;
    for (int i = 1; i <= n; i++) {
        cin >> stu[i];
    }
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            DFS(i);
        }
    }
    cout << n - memCount << '\n';
}
void DFS(int n) {
    visited[n] = true;
    int next = stu[n];
    if (visited[next]) {
        if (!belong[next]) {
            for (int i = next; i != n; i = stu[i]) {
                memCount++;
            }
            memCount++;
        }
    } else {
        DFS(stu[n]);
    }
    belong[n] = true;
}
