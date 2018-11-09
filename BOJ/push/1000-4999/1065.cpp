#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int result = 0;
    if (n < 100) {
        result = n;
    } else {
        result = 99;
        for (int i = 100; i <= n; i++) {
            int _100, _10, _1;
            _100 = i / 100;
            _10 = (i % 100) / 10;
            _1 = i % 10;
            int diff1 = _100 - _10;
            int diff2 = _10 - _1;
            if (diff1 == diff2) {
                result++;
            }
        }
    }
    cout << result << '\n';
}
