#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cin >> s;
    int sSize = s.size();
    string result = "";
    for(int i=0; i< sSize; i++){
        if(s[i]>='A' && s[i] <='Z'){
            result += s[i];
        }
    }
    cout << result;
}