## [BOJ 14753번 MultiMax 문제](https://noj.am/14753)

작년 ACM-ICPC 인터넷 예선 문제였다. 올해 ICPC 본선 예비소집 B번 문제로 나왔다.

오름차순으로 정렬을 하고 맨 뒤 가장 큰 숫자 두 개를 골라 곱한 수와 세 개를 골라 곱한 수 중 큰 값을 일단 max로 갖고 있는다.

음수가 두 개 이상 나오는 경우 맨 앞 [0] [1]을 곱한 수도 양수이기 때문에 이 둘을 곱한 수와 현재 max 중 큰 값을 갖고 있는다.

또 위 음수를 곱한 수와 양수로 가장 큰 수 [size-1]를 곱한 수랑 현재 max를 비교해서 더 높은 값을 출력하면 된다. 

> 14753.cpp

```cpp
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int input;
        cin >> input;
        v.push_back(input);
    }
    sort(v.begin(), v.end());
    int result = max(v[n - 1] * v[n - 2], v[n - 1] * v[n - 2] * v[n - 3]);
    if (v[0] * v[1] > 0) {
        result = max(v[0] * v[1], result);
        result = max(v[0] * v[1] * v[n - 1], result);
    }
    cout << result;
}
```