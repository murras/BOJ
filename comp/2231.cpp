#include <iostream>
using namespace std;

int f(int n) {
    int sum = 0;
    sum += n;
    while (n > 0) {
        sum += (n % 10);
        n /= 10;
    }
    return sum;
}
int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (f(i) == n) {
            cout << i;
            return 0;
        }
    }
    cout << '0';
}