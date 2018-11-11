#include <bits/stdc++.h>
using namespace std;
int arr[3][2];
int main() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 2; j++) cin >> arr[i][j];
    if (arr[0][0] == arr[1][0]) {
        cout << arr[2][0] << ' ';
    } else if (arr[0][0] == arr[2][0]) {
        cout << arr[1][0] << ' ';
    } else {
        cout << arr[0][0] << ' ';
    }
    if (arr[0][1] == arr[1][1]) {
        cout << arr[2][1] << ' ';
    } else if (arr[0][1] == arr[2][1]) {
        cout << arr[1][1] << ' ';
    } else {
        cout << arr[0][1] << ' ';
    }
}