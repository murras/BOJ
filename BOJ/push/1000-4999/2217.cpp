#include <algorithm>
#include <iostream>
using namespace std;
int arr[10001];
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int ret = 0;
    for (int i = 0; i < n; i++) {
        ret = max(ret, arr[i] * (n - i));
    }
    cout << ret << '\n';
    return 0;
}