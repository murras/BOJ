#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    priority_queue<int> pq;
    int n;
    cin >> n;
    while (n--) {
        int input;
        cin >> input;
        if (input != 0) {
            pq.push(input);
        } else {
            if (pq.empty()) {
                cout << "0" << '\n';
            } else {
                cout << pq.top() << '\n';
                pq.pop();
            }
        }
    }
}