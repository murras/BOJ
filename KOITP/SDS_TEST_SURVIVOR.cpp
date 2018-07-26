#include <cstring>
#include <iostream>
using namespace std;
int ground[12][12];
bool water, grass, moun, bulmozi;
int count;
void solve(int t);
void init();
void check(int n);

int main()
{
    int test;
    cin >> test;
    int t = 1;
    while (test--) {
        solve(t);
        t++;
    }
}

void solve(int t)
{
    int n;
    cin >> n;
    memset(ground, -1, sizeof(ground));

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> ground[i][j];
        }
    }
    ::count = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            init();
            check(ground[i - 1][j - 1]);
            check(ground[i - 1][j]);
            check(ground[i - 1][j + 1]);
            check(ground[i][j - 1]);
            check(ground[i][j]);
            check(ground[i][j + 1]);
            check(ground[i + 1][j - 1]);
            check(ground[i + 1][j]);
            check(ground[i + 1][j + 1]);
            if (bulmozi)
                continue;
            if (water && moun && grass && ground[i][j]) {
                ::count++;
                // cout << i << " " << j << '\n';
            }
        }
    }
    cout << "#" << t << " " << ::count << '\n';
}

void init()
{
    bulmozi = water = grass = moun = false;
}
void check(int n)
{
    if (n == 0)
        bulmozi = true;
    if (n == 1)
        water = true;
    if (n == 2)
        moun = true;
    if (n == 3)
        grass = true;
}