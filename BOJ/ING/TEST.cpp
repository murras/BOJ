#include <bits/stdc++.h>
using namespace std;
struct Edge {
    int v1, v2, weight;
    bool operator<(Edge &e) {
        return weight < e.weight;
    }
};
struct gr {
    bool operator()(Edge &a, Edge &b) {
        return a.weight > b.weight;
    }
};
int main() {
    priority_queue<Edge, vector<Edge>, gr> pq;
    pq.push({1, 2, 3});
    pq.push({1, 2, 4});
    Edge x = pq.top();
    cout << x.v1 << ' ' << x.v2 << ' ' << x.weight;
}