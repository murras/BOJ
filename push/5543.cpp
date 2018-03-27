#include <iostream>
using namespace std;
int main() {
    int min1 = 2000, min2 = 2000;
    int n1 = 3, n2 = 2;
    while (n1--) {
        int n;
        cin >> n;
        if (min1 > n)
            min1 = n;
    }
    while (n2--) {
        int n;
        cin >> n;
        if (min2 > n)
            min2 = n;
    }
    cout << min1 + min2 - 50 << '\n';
}