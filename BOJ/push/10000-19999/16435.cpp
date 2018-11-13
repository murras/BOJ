#include <bits/stdc++.h>
using namespace std;
vector<int> v;
int main() {
    int n, l;
    cin >> n >> l;
    while (n--) {
        int inp;
        cin >> inp;
        v.push_back(inp);
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++) {
        if (l >= v[i]) {
            l++;
        }
    }
    cout << l;
}