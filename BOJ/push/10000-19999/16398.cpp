#include <bits/stdc++.h>
using namespace std;
#define MAXX 1001
typedef long long ll;
struct Edge {
    int v1;
    int v2;
    int c;
    bool operator<(Edge &e) {
        return c < e.c;
    }
};

int n;
int parent[MAXX];
int setSize[MAXX];
vector<Edge> ev;

void init();                // parent, setSize 배열 초기화
int find_(int n);           // 부모를 찾는 함수
void union_(int a, int b);  // 집합을 합치는 함수

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int cost;
            cin >> cost;
            if (i < j) {
                ev.push_back({i, j, cost});
            }
        }
    }
    sort(ev.begin(), ev.end());
    init();
    ll result = 0;
    for (int i = 0; i < ev.size(); i++) {
        // 같은 집합이 아니면
        if (find_(ev[i].v1) != find_(ev[i].v2)) {
            union_(ev[i].v1, ev[i].v2);
            result += ev[i].c;
        }
    }
    cout << result;
}

void init() {
    for (int i = 0; i < n; i++) {
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