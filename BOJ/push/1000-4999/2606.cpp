#include <bits/stdc++.h>
using namespace std;
#define MAXX 101
int parent[MAXX], n, conn;

void _union(int, int);
int _find(int);
vector<pair<int, int> > edgeV;
int main() {
    cin >> n >> conn;
    for (int i = 1; i <= n; i++) {
        parent[i] = i;
    }
    for (int i = 0; i < conn; i++) {
        int first, second;
        cin >> first >> second;
        edgeV.push_back({first, second});
    }
    sort(edgeV.begin(), edgeV.end());
    for (int i = 0; i < conn; i++) {
        int first = edgeV[i].first;
        int second = edgeV[i].second;
        _union(first, second);
    }
    int test = 1;
    int count = 0;
    for (int i = 2; i <= n; i++) {
        if (_find(1) == _find(i))
            count++;
    }
    cout << count;
}

void _union(int f, int s) {
    int firstParent = _find(f);
    int secondParent = _find(s);
    if (firstParent > secondParent)
        parent[firstParent] = secondParent;
    else
        parent[secondParent] = firstParent;
}

int _find(int i) {
    if (parent[i] == i) {
        return i;
    }
    return parent[i] = _find(parent[i]);
}