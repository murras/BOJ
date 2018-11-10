#include <bits/stdc++.h>
using namespace std;
bool visited[100000];
bool minuss[10];
int po(int n) {
    int nn = 1;
    for (int i = 0; i < n; i++) {
        nn *= 10;
    }
    return nn;
}
int B(int i) {
    if (i == 0) {
        return i;
    }
    int originI = i * 2;
    i = originI;
    int t = 0;
    while (i > 0) {
        t++;
        i /= 10;
    }
    originI -= po(t - 1);
    return originI;
}

int main() {
    int n, t, g;
    cin >> n >> t >> g;
    queue<pair<int, int> > q;
    visited[n] = true;
    q.push({n, 0});

    while (!q.empty()) {
        int now = q.front().first;
        int cnt = q.front().second;
        q.pop();

        if (cnt > t) {
            cout << "ANG";
            return 0;
        }
        if (now == g) {
            cout << cnt;
            return 0;
        }

        if ((now + 1 <= 99999) && !visited[now + 1]) {
            q.push({now + 1, cnt + 1});
            visited[now + 1] = true;
        }
        int next = B(now);
        if ((now * 2 <= 99999) && !visited[next]) {
            q.push({next, cnt + 1});
            visited[next] = true;
        }
    }
    cout << "ANG";
}