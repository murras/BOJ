#include <bits/stdc++.h>
using namespace std;
const int mx = 101;
char grid[mx][mx];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    while (true) {
        int n;
        cin >> n;

        if (!n) break;
        memset(grid, 0, sizeof(grid));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++)
                cin >> grid[i][j];
        }

        for (int i = 0; i < n; i++) {
            int cnt = 0;
            bool exist = false;
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 'X') {
                    exist = true;
                    if (grid[i][j + 1] == 'X') {
                        ++cnt;
                    } else {
                        cout << ++cnt << " ";
                        cnt = 0;
                    }
                }
            }
            if (!exist) cout << "0";
            cout << '\n';
        }
        for (int i = 0; i < n; i++) {
            int cnt = 0;
            bool exist = false;
            for (int j = 0; j < n; j++) {
                if (grid[j][i] == 'X') {
                    exist = true;
                    if (grid[j + 1][i] == 'X') {
                        ++cnt;
                    } else {
                        cout << ++cnt << " ";
                        cnt = 0;
                    }
                }
            }
            if (!exist) cout << "0";
            cout << '\n';
        }
    }
}