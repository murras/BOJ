#include <bits/stdc++.h>
using namespace std;
int main() {
    int s = 0;
    vector<int> v;
    for (int i = 0; i < 7; i++) {
        int input;
        cin >> input;
        if (input % 2 == 1) {
            s += input;
            v.push_back(input);
        }
    }
    if (v.empty()) {
        cout << -1;
        return 0;
    }
    sort(v.begin(), v.end());
    cout << s << '\n'
         << v[0];
}