#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int stringSize;
    cin >> s;
    stringSize = s.size();
    stack<char> st;
    long long result = 0;
    int multi = 1;
    bool right = true;

    for (int i = 0; i < stringSize; i++) {
        if (s[i] == '(') {
            multi *= 2;
            st.push(s[i]);
        } 
        else if (s[i] == ')') {
            if (st.empty() || st.top() != '(') { // ) 가 들어왔는데 스택이 비어있거나 top에 (가 없으면
                right = false;
                break;
            }
            if (s[i - 1] == '(') {
                result += multi;
            }
            multi /= 2;
            st.pop();
        } 
        else if (s[i] == '[') {
            multi *= 3;
            st.push(s[i]);
        } 
        else if (s[i] == ']') {
            if (st.empty() || st.top() != '[') { // ] 가 들어왔는데 스택이 비어있거나 top에 [가 없으면
                right = false;
                break;
            }
            if (s[i - 1] == '[') {
                result += multi;
            }
            multi /= 3;
            st.pop();
        }
    }
    if (right && st.empty()) {
        cout << result;
    } else {
        cout << 0;
    }
}