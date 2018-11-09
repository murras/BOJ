#include <bits/stdc++.h>
using namespace std;
bool visited[201][201][201];
struct Water {
    int a;
    int b;
    int c;
};
int main() {
    int A, B, C;
    cin >> A >> B >> C;
    set<int> ans;
    queue<Water> q;
    q.push({0, 0, C});

    while (!q.empty()) {
        int nowA = q.front().a;
        int nowB = q.front().b;
        int nowC = q.front().c;
        q.pop();
        if (visited[nowA][nowB][nowC])
            continue;
        visited[nowA][nowB][nowC] = true;
        // A가 0일때의 C의 용량을 담는다.
        if (nowA == 0) {
            //ans.push_back(nowC);
            ans.insert(nowC);
        }
        // case 1) C->B
        if (nowB + nowC > B) {
            q.push({nowA, B, nowB + nowC - B});
        } else {
            q.push({nowA, nowB + nowC, 0});
        }
        // case 2) C->A
        if (nowA + nowC > A) {
            q.push({A, nowB, nowA + nowC - A});
        } else {
            q.push({nowA + nowC, nowB, 0});
        }
        // case 3) B->A
        if (nowA + nowB > A) {
            q.push({A, nowA + nowB - A, nowC});
        } else {
            q.push({nowA + nowB, 0, nowC});
        }
        // case 4) B->C
        if (nowB + nowC > C) {
            q.push({nowA, nowB + nowC - C, C});
        } else {
            q.push({nowA, 0, nowB + nowC});
        }
        // case 5) A->B
        if (nowA + nowB > B) {
            q.push({nowA + nowB - B, B, nowC});
        } else {
            q.push({0, nowA + nowB, nowC});
        }
        // case 6) A->C
        if (nowA + nowC > C) {
            q.push({nowA + nowC - C, nowB, C});
        } else {
            q.push({0, nowB, nowA + nowC});
        }
    }
    set<int>::iterator iter;
    for (iter = ans.begin(); iter != ans.end(); iter++) {
        cout << *iter << " ";
    }
}