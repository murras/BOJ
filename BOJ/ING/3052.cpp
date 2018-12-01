#include <bits/stdc++.h>
using namespace std;

bool check[42];

int main() {
    int n = 10;
    while (n--) {
        int input;
        cin >> input;
        check[input % 42] = true;
    }
    int result = 0;
    for (int i = 0; i < 42; i++) {
        if (check[i]) {
            result++;
        }
    }
    cout << result;
}