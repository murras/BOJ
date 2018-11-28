#include <bits/stdc++.h>
using namespace std;
#define MAXX 10001
typedef long long ll;

struct Edge {
    int v1;
    int v2;
    int weight;
    bool operator<(Edge &e) {
        // 가중치 순으로 정렬하기 위해 정의해줘야한다.
        return weight < e.weight;
    }
};

int v, e;
int parent[MAXX];
int setSize[MAXX];
ll weights = 0;

void init();                // parent, setSize 배열 초기화
int find_(int n);           // 부모를 찾는 함수
void union_(int a, int b);  // 집합을 합치는 함수

int main() {
    cin >> v >> e;
    vector<Edge> edgeV;
    for (int i = 0; i < e; i++) {
        int a, b, c;
        // 정점과 가중치 입력 받기.
        cin >> a >> b >> c;
        edgeV.push_back({a, b, c});
    }
    // 가중치 순으로 정렬한다.
    sort(edgeV.begin(), edgeV.end());
    init();
    for (int i = 0; i < e; i++) {
        // 같은 집합이 아니면
        if (find_(edgeV[i].v1) != find_(edgeV[i].v2)) {
            union_(edgeV[i].v1, edgeV[i].v2);
            weights += edgeV[i].weight;
        }
    }
    cout << weights << '\n';
}

void init() {
    for (int i = 0; i < v; i++) {
        parent[i] = i;
        setSize[i] = 0;
    }
}

int find_(int n) {
    if (n == parent[n]) {
        return n;
    }
    return parent[n] = find_(parent[n]);
}

void union_(int a, int b) {
    a = find_(a);
    b = find_(b);
    if (a != b) {
        // 크기가 작은 쪽이 큰 쪽으로 합치게끔 구현한다.
        if (setSize[a] < setSize[b]) {
            swap(a, b);
        }
        parent[b] = a;
        setSize[a] += setSize[b];
        setSize[b] = 0;
    }
}