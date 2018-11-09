#include <bits/stdc++.h>
using namespace std;
int a[11];
int main() {
    int L, P;
    cin >> L >> P;
    int people = L * P;
    for (int i = 0; i < 5; i++) {
        cin >> a[i];
        a[i] -= people;
        cout << a[i] << ' ';
    }
}