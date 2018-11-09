#include <algorithm>
#include <cstdlib>
#include <iostream>
using namespace std;
int main() {
    int n, x, ans = 0;
    cin >> n >> x;
    while (n--) {
        int a, b, c;
        cin >> a >> b;
        if (abs(a - b) <= x) {
            ans += max(a, b);
            continue;
        }
        cin >> c;
        ans += c;
    }
    cout << ans;
}