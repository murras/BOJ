#include <bits/stdc++.h>
using namespace std;
long long power_(int n, int times) {
    long long res = 1;
    for (int i = 0; i < times; i++) {
        res = res * n;
    }
    return res;
}
long long ans;
int main() {
    for (int i = 0; i < 5; i++) {
        int input;
        cin >> input;
        ans += power_(input, 2);
    }
    cout << ans % 10;
}