#include <algorithm>
#include <iostream>
using namespace std;
void solve(int);

int main()
{
    int test;
    cin >> test;
    for (int i = 1; i <= test; i++)
        solve(i);
}

void solve(int i)
{
    int N, M, r1, c1, r2, c2;
    cin >> N >> M >> r1 >> c1 >> r2 >> c2;

    int ans = 0;
    if (abs(r1 - r2) > (N / 2)) {
        ans += (N - abs(r1 - r2));
    } else {
        ans += abs(r1 - r2);
    }
    if (abs(c1 - c2) > (M / 2)) {
        ans += (M - abs(c1 - c2));
    } else {
        ans += abs(c1 - c2);
    }
    cout << "#" << i << " " << ans << '\n';
}