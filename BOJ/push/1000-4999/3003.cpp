#include <bits/stdc++.h>
using namespace std;
int a[6] = {1, 1, 2, 2, 2, 8};
int main() {
    for (int i = 0; i < 6; i++) {
        int n;
        cin >> n;
        cout << a[i] - n << ' ';
    }
}