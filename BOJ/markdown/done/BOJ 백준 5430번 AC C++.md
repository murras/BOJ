## [BOJ 5430번 AC 문제](https://www.acmicpc.net/problem/5430)

덱을 사용해서 푸는 문제인데 입력이 [1,2,3,4] 이런 식으로 주어져서 string을 정수로 변환하는 과정이 필요합니다. 한 자리수가 아니라 두 자리수 이상일 수 있으니 유의해서 풀어야합니다.

배열 원소 개수 n이 0일 때 출력을 신경써야합니다.

> 5430.cpp

```cpp
#include <bits/stdc++.h>
using namespace std;
void printD(deque<int> q) {
    cout << '\n';
    for (auto s = q.begin(); s != q.end(); ++s)
        cout << *s << " ";
    cout << '\n';
}

void solve() {
    string func, arr;
    int size;
    cin >> func >> size >> arr;
    int arrSize = arr.size(), num = 0;
    deque<int> deq;

    if (size != 0) {
        for (int i = 1; i < arrSize; ++i) {
            if (arr[i] >= '0' && arr[i] <= '9') {
                num *= 10;
                num += (arr[i] - '0');
            } else {
                deq.push_back(num);
                num = 0;
            }
        }
    }
    int funcSize = func.size();
    bool forward = true;
    for (int i = 0; i < funcSize; ++i) {
        if (func[i] == 'R') {
            forward = !forward;
        } else if (func[i] == 'D') {
            if (deq.empty()) {
                cout << "error\n";
                return;
            }
            if (forward) {
                deq.pop_front();
            } else {
                deq.pop_back();
            }
        }
    }

    cout << "[";
    int deqSize = deq.size();
    if (forward) {
        for (int i = 0; i < deqSize; ++i) {
            cout << deq[i];
            if (i != deqSize - 1) {
                cout << ",";
            }
        }
    } else {
        for (int i = deqSize - 1; i >= 0; --i) {
            cout << deq[i];
            if (i != 0) {
                cout << ",";
            }
        }
    }
    cout << "]\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
```