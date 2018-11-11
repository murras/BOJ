#include <bits/stdc++.h>
using namespace std;
char change(char c) {
    if (c >= 'a' && c <= 'z') {
        return (char)(c - 32);
    }
    return (char)(c + 32);
}
int main() {
    string s;
    cin >> s;
    int sSize = s.size();
    for (int i = 0; i < sSize; i++) {
        cout << change(s[i]);
    }
}