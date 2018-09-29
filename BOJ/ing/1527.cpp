#include <iostream>
using namespace std;
int a, b, count;
void rec(int n, int ten) {
    if (ten >= 10) {
        return;  // 10^10
    }
    if (n > b) {
        return;
    }
    if (n >= a) {
        ::count++;
    }
    rec(n * 10 + 4, ten + 1);
    rec(n * 10 + 7, ten + 1);
}
int main() {
    cin >> a >> b;
    rec(0, 0);
    cout << ::count;
}