#include <iostream>
using namespace std;
int main() {
    int all;
    cin >> all;
    int arr[9], sum = 0;
    for (int i = 0; i < 9; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << all - sum << '\n';
}