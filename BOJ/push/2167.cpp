#include <iostream>
using namespace std;
int arr[301][301];
int d[301][301];
int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> arr[i][j];
        }
    }
    int k;
    cin >> k;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            d[i][j] = d[i][j - 1] + arr[i][j];
        }
    }
    while (k--) {
        int i, j, x, y;
        int sum = 0;
        cin >> i >> j >> x >> y;
        for (int i_ = i; i_ <= x; i_++) {
            sum += d[i_][y] - d[i_][j - 1];
        }
        cout << sum << '\n';
    }
}