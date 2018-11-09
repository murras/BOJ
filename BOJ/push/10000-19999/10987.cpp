#include <iostream>
using namespace std;

bool check(char c) {
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        return true;
    }
    return false;
}

int main() {
    string s;
    cin >> s;
    int stringSize = s.size();
    int count = 0;
    for (int i = 0; i < stringSize; i++) {
        if (check(s[i])) {
            count++;
        }
    }
    cout << count;
}