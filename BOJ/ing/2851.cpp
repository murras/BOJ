#include <iostream>
using namespace std;
int main() {
    int sum, a[10];
    for (int i = 0; i < 10; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < 10; i++) {
        int afterSum = sum + a[i];
        if (afterSum == 100) {
            cout << afterSum;
            return 0;
        } else if (afterSum < 100) {
            sum += a[i];
        } else {
            if (afterSum - 100 <= 100 - sum) {
                cout << afterSum;
                return 0;
            }
        }
        sum += a[i];
    }
}