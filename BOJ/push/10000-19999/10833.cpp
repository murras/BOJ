#include <bits/stdc++.h>
using namespace std;
int app[101][2];
int main() {
    int n;
    cin >> n;
    int a, b, sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        sum += (b % a);
    }
    cout << sum;
}