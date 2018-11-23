#include <bits/stdc++.h>
using namespace std;
int maxNum, input, index_;
int main() {
    for (int i = 0; i < 81; i++) {
        cin >> input;
        if (maxNum <= input) {
            maxNum = input;
            index_ = i;
        }
    }
    cout << maxNum << '\n';
    cout << index_ / 9 + 1 << ' ' << index_ % 9 + 1;
}