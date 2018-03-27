#include <iostream>
using namespace std;
int arr[10];
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int mul = a * b * c;
    while (mul > 0) {
        int i = mul % 10;
        arr[i]++;
        mul /= 10;
    }
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << '\n';
    }
}