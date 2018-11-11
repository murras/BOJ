#include <bits/stdc++.h>
using namespace std;
void solve() {
    int s;
    cin >> s; 
    int n;
    cin >> n;
    while (n--) {
        int a, b;
        cin >> a >> b;
        s = s + (a * b);
    }
    cout << s << '\n';
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}