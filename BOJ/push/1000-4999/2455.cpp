#include <bits/stdc++.h>
using namespace std;
int people, ans;
int main() {
    for (int i = 0; i < 4; i++) {
        int a, b;
        cin >> a >> b;
        people = people - a + b;
        ans = max(ans, people);
    }
    cout << ans;
}