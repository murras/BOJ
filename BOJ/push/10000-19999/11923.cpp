#include <algorithm>
#include <iostream>
using namespace std;
int main() {
    int n, c;
    int eat = 0;
    int maxCount = 0;
    cin >> n >> c;
    int arr[1001];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        int count = 0;
        eat = 0;
        for (int j = i; j < n; j++) {
            if (eat + arr[j] <= c) {
                eat += arr[j];
                count++;
            }
        }
        maxCount = max(count, maxCount);
    }
    cout << maxCount << '\n';
}