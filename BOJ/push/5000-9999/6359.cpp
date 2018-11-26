#include <bits/stdc++.h>
using namespace std;
bool dp[101];
void solve() {
    memset(dp, 0, sizeof(dp));
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j += i) {
            if (dp[j])
                dp[j] = false;
            else
                dp[j] = true;
        }
    }
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (dp[i]) count++;
    }
    cout << count << '\n';
}
int main() {
    int n;
    cin >> n;
    while (n--) {
        solve();
    }
}