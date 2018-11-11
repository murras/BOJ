#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    string b;
    cin >> a >> b;
    int ar[3];
    ar[0] = a * (b[2] - '0');
    ar[1] = a * (b[1] - '0');
    ar[2] = a * (b[0] - '0');
    cout << ar[0] << '\n'
         << ar[1] << '\n'
         << ar[2] << '\n'
         << ar[0] + ar[1] * 10 + ar[2] * 100;
}