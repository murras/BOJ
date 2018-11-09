#include <iostream>
#include <string>
using namespace std;

char check(char, char, char);

int main() {
    string si;
    cin >> si;
    int stringSize = si.size();
    if (stringSize % 3 != 0) {
        int threeRemainder = stringSize % 3;
        int plus = 3 - threeRemainder;
        for (int i = 0; i < plus; i++) {
            si = "0" + si;
        }
    }
    int howmany = si.size() / 3;
    string result;
    for (int i = 0; i < howmany; i++) {
        result[i] = check(si[3 * i], si[3 * i + 1], si[3 * i + 2]);
        cout << check(si[3 * i], si[3 * i + 1], si[3 * i + 2]);
    }
}

char check(char one, char two, char three) {
    if (one == '0' && two == '0' && three == '0') {
        return '0';
    }
    if (one == '0' && two == '0' && three == '1') {
        return '1';
    }
    if (one == '0' && two == '1' && three == '0') {
        return '2';
    }
    if (one == '0' && two == '1' && three == '1') {
        return '3';
    }
    if (one == '1' && two == '0' && three == '0') {
        return '4';
    }
    if (one == '1' && two == '0' && three == '1') {
        return '5';
    }
    if (one == '1' && two == '1' && three == '0') {
        return '6';
    }
    if (one == '1' && two == '1' && three == '1') {
        return '7';
    }
}