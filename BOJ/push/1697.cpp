#include <bits/stdc++.h>
using namespace std;
int N, K;
bool visited[100001];
int main() {
    cin >> N >> K;

    queue<pair<int, int> > q;
    visited[N] = true;
    q.push({N, 0});
    while (!q.empty()) {
        int position = q.front().first;
        int count = q.front().second;
        q.pop();

        if (position == K) {
            cout << count;
            return 0;
        }
        if (position - 1 >= 0 && !visited[position - 1]) {
            visited[position - 1] = true;
            q.push({position - 1, count + 1});
        }
        if (position + 1 <= 100000 && !visited[position + 1]) {
            visited[position + 1] = true;
            q.push({position + 1, count + 1});
        }
        if (position * 2 <= 100000 && !visited[position * 2]) {
            visited[position * 2] = true;
            q.push({position * 2, count + 1});
        }
    }
}