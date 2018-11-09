#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, a, b, c;
    cin >> N;
    while (N--) {
        cin >> a >> b >> c;
        if (a == (b - c)) {
            cout << "does not matter\n";
        } else if (a > (b - c)) {
            cout << "do not advertise\n";
        } else {
            cout << "advertise\n";
        }
    }
}