#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int stringSize;
    cin >> s;
    stringSize = s.size();
    stack<char> st;
    int result = 0, multi = 1;
    bool right = true;

    for (int i = 0; i < stringSize; i++) {
        switch (s[i]) {
            case '(':
                multi *= 2;
                st.push(s[i]);
                break;
            case ')':
                if (s[i - 1] == '(') {
                    result += multi;
                }
                multi /= 2;
                st.pop();
                break;
            case '[':
                multi *= 3;
                st.push(s[i]);
                break;
            case ']':
                if (s[i - 1] == '[') {
                    result += multi;
                }
                multi /= 3;
                st.pop();
                break;
        }
    }
    if (right && st.empty()) {
        cout << result;
    } else {
        cout << 0;
    }
}