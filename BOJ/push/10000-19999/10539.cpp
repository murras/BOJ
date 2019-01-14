#include <bits/stdc++.h>
using namespace std;
int arr[101];
int res[101];
int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    int plus = 0;
    res[1] = arr[1];
    for (int i = 2; i <= n; i++) {
        plus = 0;
        for (int j = 1; j <= i; j++) {
            plus += res[j];
        }
        res[i] = arr[i] * i - plus;
    }
    for (int i = 1; i <= n; i++) {
        cout << res[i] << ' ';
    }
}
