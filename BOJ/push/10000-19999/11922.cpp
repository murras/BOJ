#include <iostream>
#include <string>
using namespace std;
int my[401];
int result;
int main() {
    int n;
    int score[8][2] = {11, 11, 4, 4, 3, 3, 2, 2, 10, 10, 14, 0, 0, 0, 0, 0};
    cin >> n;
    char ch;
    cin >> ch;
    for (int i = 0; i < 4 * n; ++i) {
        string input;
        cin >> input;
        if (input[0] == 'A') {
                result += 11;
        }
        if (input[0] == 'K') {
                result += 4;
        }
        if (input[0] == 'Q') {
                result += 3;
        }
        if (input[0] == 'J') {
            if (input[1] == ch) {
                result += 20;
            } else {
                result += 2;
            }
        }
        if (input[0] == 'T') {
                result += 10;
        }
        if (input[0] == '9') {
            if (input[1] == ch) {
                result += 14;
            }
        }
    }
    cout << result;
}