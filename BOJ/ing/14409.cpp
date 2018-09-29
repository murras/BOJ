#include <algorithm>
#include <iostream>
using namespace std;
int main() {
    int n, x;
    cin >> n >> x;
    int sum = 0;
    while (n--) {
        int in1, in2;
        cin >> in1 >> in2;
        if (abs(in1 - in2) > 2) {
            int in3;
            cin >> in3;
            sum += in3;
            continue;
        }
        sum += max(in1, in2);
    }
    cout << sum;
}