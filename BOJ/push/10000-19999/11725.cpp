// 알고리즘 기초 Ch7
#include <cstdio>
#include <queue>
#include <vector>
using namespace std;
vector<int> a[100001];
int depth[100001];
int parent[100001];
bool check[100001];
int main(){
    int n;
    scanf("%d", &n);
    for(int i=0; i<n-1; i++){
        int u, v;
        scanf("%d %d", &u, &v);
        a[u].push_back(v);
        a[v].push_back(u);
    }
    depth[1] = 0;
    check[1] = true;
    queue<int> q;
    q.push(1);
    parent[1] = 0;
    while(!q.empty()){
        int x = q.front();
        q.pop();
        for(int i=0; i<a[x].size(); i++){
            int y = a[x][i];
            if(!check[y]){
                depth[y] = depth[x] + 1;
                check[y] = true;
                parent[y] = x;
                q.push(y);
            }
        }
    }
    for(int i=2; i<=n; i++){
        printf("%d\n", parent[i]);
    }
}
