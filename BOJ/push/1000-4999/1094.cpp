#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int s = 0;
    while (n > 0) {
        if (n % 2 == 1) {
            s++;
        }
        n /= 2;
    }
    cout << s;
}