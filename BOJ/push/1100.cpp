#include <bits/stdc++.h>
using namespace std;
bool chess[8][8];
int main() {
    char c[8][8];
    for (int i = 0; i < 8; i += 2) {
        for (int j = 0; j < 8; j += 2) {
            chess[i][j] = true;
        }
    }
    for (int i = 1; i < 8; i += 2) {
        for (int j = 1; j < 8; j += 2) {
            chess[i][j] = true;
        }
    }
    int ans = 0;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            cin >> c[i][j]; 
            if (c[i][j] == 'F' && chess[i][j]) {
                ans++;
            }
        } 
    }
    cout << ans;
}