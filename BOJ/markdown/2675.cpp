#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int iter;
        cin >> iter;
        string s;
        cin >> s;

        int s_size = s.size();
        for (int i = 0; i < s_size; i++) {
            for (int j = 0; j < iter; j++) {
                cout << s[i];
            }
        }
        cout << '\n';
    }
}