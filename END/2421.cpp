#include <algorithm>
#include <cmath>
#include <cstring>
#include <iostream>
#include <string>
using namespace std;
const int MAX = 1000001;
bool prime[MAX];
int d[1001][1001];
int n;
int solve(int, int);
void eratos();
int howmanyten(int, int);

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    eratos();
    memset(d, -1, sizeof(d));
    cout << solve(1, 1);
}

void eratos() {
    memset(prime, true, sizeof(prime));
    // true 이면 소수
    prime[0] = false;
    prime[1] = false;
    int sqrt_max = sqrt(MAX) + 1;
    for (int i = 2; i <= sqrt_max; i++) {
        if (prime[i]) {
            for (int j = i * i; j <= MAX; j += i) {
                prime[j] = false;
            }
        }
    }
}

int solve(int f, int s) {
    if (f == n && s == n) return 0;
    int &result = d[f][s];
    if (result != -1) return result;
    if (f < n) result = solve(f + 1, s) + prime[howmanyten(f + 1, s)];
    if (s < n)
        result = max(result, solve(f, s + 1) + prime[howmanyten(f, s + 1)]);
    return result;
}

int howmanyten(int f, int s) {
    return stoi(to_string(f) + to_string(s));
    // int cnt = 0;
    // while (s / 10) {
    //     cnt++;
    // }
    // for (int i = 0; i < cnt; i++) {
    //     f *= 10;
    // }
    // return f + s;
}