#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    while (true) {
        getline(cin, s);
        if (s == "END") return 0;
        int s_size = s.size();
        
        for(int i=s_size;i>0;i--){
            cout << s[i-1];
        }
        cout << '\n';
    }
}