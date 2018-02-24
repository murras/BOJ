// 알고리즘 기초 CH6
#include <iostream>
#include <queue>
#include <cstdio>
using namespace std;
int arr[51][51];
int cnt[51][51];
int w, h;
int dx[8] = { 0, 1, 1, 1, 0, -1, -1, -1 };
int dy[8] = { 1, 1, 0, -1, -1, -1, 0, 1 };
void bfs(int x, int y, int count){
    queue<pair<int, int> > q;
    q.push({x, y});
    cnt[x][y] = count;
    while(!q.empty()){
        x = q.front().first;
        y = q.front().second;
        q.pop();
        for(int i=0; i<8; i++){//8방향 이동
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(0 <= nx && nx < h && 0 <= ny && ny < w){ // w, h 확인해보기
                if(arr[nx][ny] == 1 && cnt[nx][ny] == 0) { // 땅이고 안 갔다온 곳이면
                    q.push({nx, ny});
                    cnt[nx][ny] = count; // count 번째 섬
                }
            }
        }
    }
}
int main(){
    while(1){
        cin >> w >> h;
        if(!w && !h)
            break;
        for(int i=0; i<h; i++)
            for(int j=0; j<w; j++){
                scanf("%1d", &arr[i][j]);
                cnt[i][j] = 0;
            }
        int count = 0;
        for(int i=0; i<h; i++){
            for(int j=0; j<w; j++){
                if(arr[i][j] == 1 && cnt[i][j] == 0){
                    bfs(i, j, ++count);
                }
            }
        }
        printf("%d\n", count);     
    }
}

