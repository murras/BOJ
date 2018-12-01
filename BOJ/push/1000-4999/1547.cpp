#include <bits/stdc++.h>
using namespace std;

bool ball[4];

int main() {
    int n;
    cin >> n;
    ball[1] = true;
    while (n--) {
        int one, two;
        cin >> one >> two;
        swap(ball[one], ball[two]);
    }
    for (int i = 1; i <= 3; i++) {
        if (ball[i]) {
            cout << i;
            return 0;
        }
    }
    cout << "-1";
    return 0;
}