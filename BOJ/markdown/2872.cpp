#include <bits/stdc++.h>
using namespace std;
int book[300001];
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> book[i];
    }
    int checkingNum = n;
    int ans = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (book[i] == checkingNum) {
            checkingNum--;
        }
        else{
            ans++;
        }
    }
    cout << ans;
    return 0;
}
