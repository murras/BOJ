#include <algorithm>
#include <iostream>
using namespace std;
int main() {
    int arr[10];
    int sum = 0;
    for (int i = 0; i < 9; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    int ans1, ans2;
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            if (i == j) {
                continue;
            }
            if (sum - arr[i] - arr[j] == 100) {
                arr[i] = 0;
                arr[j] = 0;
            }
        }
    }
    cout << ans1 << ans2 << endl;
    sort(arr, arr + 9);
    for (int i = 2; i < 9; i++) {
        cout << arr[i] << '\n';
    }
}