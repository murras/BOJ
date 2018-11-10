## [BOJ 16360번 Go Latin 문제](https://www.acmicpc.net/problem/16360)

이번 ICPC 본선 문제 중에 유일하게 푼 문제이다. 내가 푼게 아니라서 집에 와서 풀어봤다.

if문으로 각 조건을 비교하고 테이블에 맞게 붙여주거나 수정 후 붙여주면 된다.

테이블에 속하지 않으면 `us`를 붙인다.

> 16360.cpp

```cpp
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        int sSize = s.size();

        if (s[sSize - 1] == 'a') {
            s += "s";
        } else if (s[sSize - 1] == 'i' || s[sSize - 1] == 'y') {
            s[sSize - 1] = 'i';
            s += "os";
        } else if (s[sSize - 1] == 'l') {
            s += "es";
        } else if (s[sSize - 1] == 'n') {
            s[sSize - 1] = 'a';
            s += "nes";
        } else if (s[sSize - 1] == 'e' && s[sSize - 2] == 'n') {
            s[sSize - 2] = 'a';
            s[sSize - 1] = 'n';
            s += "es";
        } else if (s[sSize - 1] == 'o') {
            s += 's';
        } else if (s[sSize - 1] == 'r') {
            s += "es";
        } else if (s[sSize - 1] == 't') {
            s += "as";
        } else if (s[sSize - 1] == 'u') {
            s += "s";
        } else if (s[sSize - 1] == 'v') {
            s += "es";
        } else if (s[sSize - 1] == 'w') {
            s += "as";
        } else {
            s += "us";
        }
        cout << s << '\n';
    }
}
```