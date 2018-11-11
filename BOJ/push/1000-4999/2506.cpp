#include <bits/stdc++.h>
using namespace std;
int score[101];
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> score[i];
    }

    int sum = 0;

    stack<bool> s;

    for (int i = 0; i < n; i++) {
        if (score[i]) {
            s.push(true);
            sum += s.size();
        } else {
            while (!s.empty()) {
                s.pop();
            }
        }
    }
    cout << sum;
}