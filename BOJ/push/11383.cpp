#include <iostream>
#include <string>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    string str[10];
    bool check = true;
    for (int i = 0; i < n; ++i) {
        cin >> str[i];
    }
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        int size = s.size();
        for (int j = 0; j < size; ++j) {
            if (str[i][j/2] != s[j]) {
                //cout << str[i][j/2] << ' ' << s[j / 2];
                //cout << "i" << i << "j" << j << '\n';
                check = false;
                break;
            }
        }
    }
    if (check) {
        cout << "Eyfa";
    } else {
        cout << "Not Eyfa";
    }
}
