#include <iostream>
using namespace std;
bool check[10001];
void self(int n) {
    if (n > 10000) {
        return;
    }
    int k = n;
    while (n > 0) {
        k += n % 10;
        n = n / 10;
    }
    check[k] = true;
    self(k);
}

int main() {
    for (int i = 1; i < 10001; i++) {
        self(i);
    }
    for (int i = 1; i < 10001; i++) {
        if (!check[i]) {
            cout << i << '\n';
        }
    }
}
