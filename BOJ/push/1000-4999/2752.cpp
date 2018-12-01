#include <bits/stdc++.h>
using namespace std;

int arr[3];

int main() {
    int input;
    for (int i = 0; i < 3; i++) {
        cin >> input;
        arr[i] = input;
    }
    sort(arr, arr + 3);
    for (int i = 0; i < 3; i++)
        cout << arr[i] << ' ';
}