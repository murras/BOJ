#include <bits/stdc++.h>
#define PLUS 1
#define MULTIPLY 2
using namespace std;
int result;
int mode;
int main() {
    stack<int> s;
    int in;
    while (scanf("%c", &in)) {
        int temp;
        if (in == '(' || in == '[') {
            s.push(in);
        } 
        else if (in == ')') {
            if (s.top() == '(') {
                s.pop();
                s.push(2);
            } 
            else {
                temp = s.top();
                s.pop();
                mode = PLUS;
            }
        }
        else if(in == ']'){
            if(s.top() == '['){
                s.pop();
                s.push(3);
            }
            else{
                
            }
        }
    }
}