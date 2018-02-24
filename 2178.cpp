// 알고리즘 기초 Ch6
// 미로 탐색은 DFS로 풀 수 없다 BFS로 풀어야 한다.
#include <iostream>
#include <queue>
#include <cstdio>
using namespace std;
int n, m;
int a[101][101];
int dist[101][101];
bool check[100][100];
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

int main(){
    scanf("%d %d", &n, &m);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%1d", &a[i][j]);
        }
    }
    queue<pair<int, int> > q;
    q.push(make_pair(0, 0));
    check[0][0] = true;
	dist[0][0] = 1;
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for(int i=0; i < 4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(0 <= nx && nx < n && 0 <= ny && ny < m){
                if(check[nx][ny] == false && a[nx][ny] == 1){
                    q.push(make_pair(nx, ny));
                    dist[nx][ny] = dist[x][y] + 1;
                    check[nx][ny] = true;
                }
            }
        }
    }
    printf("%d\n", dist[n-1][m-1]);
}
