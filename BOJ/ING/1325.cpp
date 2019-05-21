#include <bits/stdc++.h>
using namespace std;
const int MX = 10001;

int n, m;
bool visited[MX];
vector<int> connect[MX];

void dfs(int, int &);
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    while (m--) {
        // com2를 통해 com1을 해킹할 수 있다
        // => com2->com1 방향 그래프를 저장해야 한다.
        int com1, com2;
        cin >> com1 >> com2;
        connect[com2].push_back(com1);
    }

    vector<int> res;
    int maxHacking = 0; // 최대 해킹값 저장
    for (int i = 1; i <= n; i++) {
        int cnt = 0;
        memset(visited, 0, sizeof(visited)); // dfs를 돌때마다 visited를 초기화 해야한다.
        dfs(i, cnt);
        // cout << " i : " << i << " cnt : " << cnt << '\n';

        if (maxHacking == cnt) {
            // 동률일땐 벡터에 추가
            res.push_back(i);
        }
        if (maxHacking < cnt) {
            maxHacking = cnt;
            // 더 많이 해킹할 수 있는 컴퓨터가 있으면 
            // 여태 저장한거 다 없애고 새로 저장
            while (!res.empty()) {
                res.pop_back();
            }
            res.push_back(i);
        }
    }
    // 오름차순 정렬 후 출력.
    sort(res.begin(), res.end());
    int resSize = res.size();
    for (int i = 0; i < resSize; i++) {
        cout << res[i] << " ";
    }
}

void dfs(int n, int &count) {
    visited[n] = true;
    int connectedNum = connect[n].size();
    for (int i = 0; i < connectedNum; i++) {
        if (!visited[connect[n][i]]) {
            dfs(connect[n][i], ++count);
        }
    }
}