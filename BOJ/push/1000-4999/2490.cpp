#include <iostream>
using namespace std;
int main() {
    int arr[4];
    int n = 3;
    while (n--) {
        int count = 0;
        for (int i = 0; i < 4; i++) {
            cin >> arr[i];
            count += arr[i];
        }
        switch (count) {
        case 1: {
            cout << 'C' << '\n';
            break;
        }
        case 2: {
            cout << 'B' << '\n';
            break;
        }
        case 3: {
            cout << 'A' << '\n';
            break;
        }
        case 4: {
            cout << 'E' << '\n';
            break;
        }
        case 0: {
            cout << "D" << '\n';
            break;
        }
        }
    }
}