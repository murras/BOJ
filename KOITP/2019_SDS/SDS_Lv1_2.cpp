#include <bits/stdc++.h>
using namespace std;
int carColor[101];
int carPass[1551];

int main() {
    int test, c = 1;
    cin >> test;

    while (test--) {
        cout << "#" << c << " ";
        int n, m, count = 0;
        cin >> n >> m;

        for (int i = 1; i <= m; i++) {
            cin >> carColor[i];
            count += carColor[i];
        }

        for (int i = 1; i <= n; i++) {
            cin >> carPass[i];
        }

        bool same;
        int result = 0;

        for (int i = 1; i <= n - count; i++) {
            int carTest[101];
            memset(carTest, 0, sizeof(carTest));
            same = true;

            for (int j = i; j < i + count; j++) {
                carTest[carPass[j]]++;
            }

            for (int j = 1; j <= m; j++) {
                if (carColor[j] != carTest[j]) {
                    same = false;
                    break;
                }
            }
            if (same) {
                result = i;
            }
        }
        cout << result;
        c++;
    }
}