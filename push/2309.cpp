#include <algorithm>
#include <iostream>
using namespace std;
int sum = 0;
int arr[10];
int main() {
    int no1, no2;
    no1 = no2 = -1;
    for (int i = 0; i < 9; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    sort(arr, arr + 9);
    for (int i = 0; i < 9; i++) {
        no1 = i;
        for (int j = i + 1; j < 9; j++) {
            if (i == j) {
                continue;
            }
            if (sum - arr[i] - arr[j] == 100) {
                no2 = j;
                break;
            }
            if ((no1 == -1) && (no2 == -1)) break;
        }
    }
    sort(arr, arr + 9);
    for (int i = 2; i < 9; i++) {
        if ((i == no1 || i == no2)) continue;
        cout << arr[i] << '\n';
    }
}
#include <algorithm>
#include <cstdio>
using namespace std;

int main() {
    int height[9], e1, e2, sum = 0;
    for (int i = 0; i < 9; i++) {
        scanf("%d", &height[i]);
        sum += height[i];
    }
    sort(height, height + 9);
    sum -= 100;

    bool flag = false;
    for (int i = 0; i < 9; i++) {
        if (sum < height[i]) continue;
        e1 = i;
        for (int j = 0; j < 9; j++) {
            if (i == j) continue;
            if (sum == height[i] + height[j]) {
                e2 = j;
                flag = true;
                break;
            }
        }
        if (flag) break;
    }

    for (int i = 0; i < 9; i++) {
        if (i == e1 || i == e2) continue;
        printf("%d\n", height[i]);
    }
}