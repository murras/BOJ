// 알고리즘 기초 Ch7
#include <iostream>
#include <queue>
#include <cstring>
#include <cstdio>
#include <vector>
using namespace std;
struct edge{
    int t, c;
    edge(int t, int c) : t(t), c(c){
    }
};
vector<edge> v[100001];
bool check[100001];
int dist[100001];

void bfs(int n){
    memset(dist, 0, sizeof(dist));
    memset(check, 0, sizeof(check));
    queue<int> q;
    check[n] = true;
    q.push(n);
    
    while(!q.empty()){
        int x = q.front();
        q.pop();
        for(int i=0; i<v[x].size(); i++){
            edge e = v[x][i];
            if(check[e.t] == false){
                check[e.t] = true;
                dist[e.t] = dist[x] + e.c;
                q.push(e.t);
            }
        }
    }
}

int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int from, to, cost;
        scanf("%d %d %d", &from, &to, &cost);
        v[from].push_back(edge(to, cost));
        v[to].push_back(edge(from, cost));
    }
    bfs(1);
    int max = 1;
    for(int i=2; i<=n; i++){
        if(dist[i] > dist[max])
            max = i;
    }
    bfs(max);
    int result = dist[1];
    for(int i=2; i<=n; i++){
        if(dist[i] > result)
            result = dist[i];
    }
    printf("%d\n", result);
}
