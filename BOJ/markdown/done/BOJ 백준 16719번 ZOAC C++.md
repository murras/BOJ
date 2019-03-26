## [BOJ 16719번 ZOAC 문제](https://www.acmicpc.net/problem/16719)

주석에 설명 적었습니다.

O(N^3)으로 풀수 있다는데 이해가 직관적이지 않아서 재귀를 써서 풀어봤습니다.

> 16719.cpp

```cpp
#include <bits/stdc++.h>
using namespace std;
#define INF 260
bool visited[101];
string s;
int sSize;
void solve(int, int);
char getSmallIndex(int, int);

int main() {
    cin >> s;
    sSize = s.size();
    solve(0, sSize - 1);
}

void solve(int l, int r) {
    int index = getSmallIndex(l, r);  // 현재 고르지 않은 문자 중 가장 작은 값의 Index
    if (index == -1) return;          // 모든 문자를 골랐을 경우 탈출
    visited[index] = true;            // 고른 문자 재사용 하는 일 없게 true

    // true인 문자는 순서대로 출력
    for (int i = 0; i < sSize; i++) {
        if (visited[i])
            cout << s[i];
    }
    cout << '\n';
    solve(index + 1, r); // 가장 작은 값을 골랐기 때문에 우측, 좌측 순으로 호출한다.
    solve(l, index - 1);
}

char getSmallIndex(int l, int r) {
    int small = 999;
    int index = -1;
    for (int i = l; i < r + 1; i++) {
        if (s[i] < small && !visited[i]) {
            small = s[i];
            index = i;
        }
    }
    return index;
}

```