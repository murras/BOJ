## [BOJ 16719�� ZOAC ����](https://www.acmicpc.net/problem/16719)

�ּ��� ���� �������ϴ�.

O(N^3)���� Ǯ�� �ִٴµ� ���ذ� ���������� �ʾƼ� ��͸� �Ἥ Ǯ��ý��ϴ�.

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
    int index = getSmallIndex(l, r);  // ���� ���� ���� ���� �� ���� ���� ���� Index
    if (index == -1) return;          // ��� ���ڸ� ����� ��� Ż��
    visited[index] = true;            // �� ���� ���� �ϴ� �� ���� true

    // true�� ���ڴ� ������� ���
    for (int i = 0; i < sSize; i++) {
        if (visited[i])
            cout << s[i];
    }
    cout << '\n';
    solve(index + 1, r); // ���� ���� ���� ����� ������ ����, ���� ������ ȣ���Ѵ�.
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