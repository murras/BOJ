#include <iostream>
using namespace std;
typedef unsigned long long ull;
ull arr[1001][11];

void solve(int n);

int main() {
    for (int i = 1; i < 11; i++) {
        arr[1][i] = 1;
    }
    for (int i = 2; i < 1001; i++) {
        arr[i][1] = (arr[i - 1][2] + arr[i - 1][4]) % 1234567;
        arr[i][2] = (arr[i - 1][1] + arr[i - 1][3] + arr[i - 1][5]) % 1234567;
        arr[i][3] = (arr[i - 1][2] + arr[i - 1][6]) % 1234567;
        arr[i][4] = (arr[i - 1][1] + arr[i - 1][5] + arr[i - 1][7]) % 1234567;
        arr[i][5] =
            (arr[i - 1][2] + arr[i - 1][4] + arr[i - 1][6] + arr[i - 1][8]) %
            1234567;
        arr[i][6] = (arr[i - 1][3] + arr[i - 1][5] + arr[i - 1][9]) % 1234567;
        arr[i][7] = (arr[i - 1][4] + arr[i - 1][8] + arr[i - 1][10]) % 1234567;
        arr[i][8] = (arr[i - 1][5] + arr[i - 1][7] + arr[i - 1][9]) % 1234567;
        arr[i][9] = (arr[i - 1][6] + arr[i - 1][8]) % 1234567;
        arr[i][10] = arr[i - 1][7];
    }
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        solve(n);
    }
}

void solve(int n) {
    ull result = 0;
    for (int i = 1; i <= 10; i++) {
        result += arr[n][i];
        result = result % 1234567;
    }
    cout << result << '\n';
}