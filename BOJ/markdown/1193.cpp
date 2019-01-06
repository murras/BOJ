#include <bits/stdc++.h>
#define MAX_ 10000
using namespace std;

int main() {
    int n;
    cin >> n;

    int i = 1;
    int s = 0;
    while (true) {
        if (n - i <= 0) {
            break;
        }
        n -= i;
        i++;
        s++;
    }

    if (s % 2 == 0) {
        cout << s + 2 - n << "/" << n;
    } else {
        cout << n << "/" << s + 2 - n;
    }
}

// 1/1 
// 1/2 2/1 
// 3/1 2/2 1/3 
// 1/4 2/3 3/2 4/1 
// 5/1 4/2 3/3 2/4 1/5 
// 1/6 2/5 3/4 4/3 5/2 6/1 