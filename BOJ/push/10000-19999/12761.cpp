#include <bits/stdc++.h>
using namespace std;

bool visited[100001];
queue<pair<int, int> > q;
int main() {
    int skyA, skyB, N, M;
    cin >> skyA >> skyB >> N >> M;

    // BFS Start
    visited[N] = true;
    q.push({N, 0});  // N번자리 0번 만에 왔다
    while (!q.empty()) {
        int position = q.front().first;
        int count = q.front().second;
        q.pop();

        if (position == M) {
            cout << count << '\n';
            return 0;
        }
        int check[8] = {position - 1,
                        position + 1,
                        position - skyA,
                        position + skyA,
                        position - skyB,
                        position + skyB,
                        position * skyA,
                        position * skyB};

        for (int i = 0; i < 8; i++) {
            if (check[i] >= 0 && check[i] <= 100000) {
                if (!visited[check[i]]) {
                    visited[check[i]] = true;
                    q.push({check[i], count + 1});
                }
            }
        }
    }
}
