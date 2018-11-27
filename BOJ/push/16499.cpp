#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<string, int> word;
    while (n--) {
        string s;
        cin >> s;
        sort(begin(s), end(s));
        word[s] = 1;
    }
    cout << word.size();
}