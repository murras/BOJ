// 알고리즘 기초 Ch6
#include <cstdio>
#include <queue>
using namespace std;
int a[101][101]; // 섬 정보 입력 받기
int g[101][101]; // 섬 번호 확장
int d[101][101]; // 거리 
int n;
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};
int main(){
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &a[i][j]);
        }
    }
    queue<pair<int, int> > q1, q2;
    int count = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(a[i][j] == 1 && g[i][j] == 0){
                g[i][j] = ++count;
                q1.push(make_pair(i, j));
                while(!q1.empty()){
                    int x = q1.front().first;
                    int y = q1.front().second;
                    q1.pop();
                    for(int i=0; i<4; i++){
                        int nx = x + dx[i];
                        int ny = y + dy[i];
                        if(0 <= nx && nx < n && 0 <= ny && ny < n){
                            if(a[nx][ny] == 1 && g[nx][ny] == 0){
                                g[nx][ny] = count;
                                q1.push(make_pair(nx, ny));
                            }
                        }
                    }
                }
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            d[i][j] = -1;
            if(a[i][j] == 1){
                q2.push(make_pair(i,j));
                d[i][j] = 0;
            }
        }
    }
    
    while(!q2.empty()){
        int x = q2.front().first;
        int y = q2.front().second;
        q2.pop();
        for(int i=0; i<4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(0 <= nx && nx < n && 0 <= ny && ny < n){
                if(d[nx][ny] == -1){
                    d[nx][ny] = d[x][y] + 1; // 거리 1 증가
                    g[nx][ny] = g[x][y]; // 섬 확장
                    q2.push(make_pair(nx, ny));
                }
            }
        }
    }
    int result = -1;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            for(int k=0; k<4; k++){
                int x = i + dx[k];
                int y = j + dy[k];
                if(0 <= x && x < n && 0 <= y && y < n){
                    if(g[i][j] != g[x][y]){ // 다른 섬일때
                        if(result == -1 || result > d[i][j] + d[x][y]){
                            result = d[i][j] + d[x][y];
                        }
                    }
                }
            }
        }
    }
    printf("%d\n", result);
}


