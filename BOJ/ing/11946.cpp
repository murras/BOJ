#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

pair<int, pair<int, int>> team[101];
int n, m, q, p[101][16];
bool cmp(pair<int, pair<int, int>> x, pair<int, pair<int, int>> y)
{
    if (x.first != y.first)
        return x.first > y.first;
    if (x.second.first != y.second.first)
        return x.second.first < y.second.first;
    else
        return x.second.second < y.second.second;
}

int main(void)
{
    for (int i = 1; i < 101; i++)
        team[i - 1].second.second = i;

    cin >> n >> m >> q;

    while (q--) {
        int a, b, c;
        string d, e;
        cin >> a >> b >> c >> d;

        b--;
        c--;
        e = d;

        if ((e != "AC") && p[b][c] != -1)
            p[b][c]++;
        else if (p[b][c] != -1) {
            team[b].first++;
            team[b].second.first += a + p[b][c] * 20;
            p[b][c] = -1;
        }
    }

    sort(team, team + n, cmp);

    for (int i = 0; i < n; i++)
        printf("%d %d %d\n", team[i].second.second, team[i].first, team[i].second.first);
}
