#include <algorithm>
#include <iostream>
using namespace std;
int s[21][21];
int max = 0x3f3f3f3f;
bool visited[21];
int n, result, oneTeam;
int count, aScore, bScore;
int aTeam[21], bTeam[21];
void dfs(int v) {
    visited[v] = true;
    count++;

    if (count == oneTeam) {
        for (int i = 1; i <= oneTeam; ++i) {
            for (int j = 1; j <= oneTeam; ++j) {
                aScore += s[aTeam[i][aTeam[j];
                bScore += s[bTeam[i][bTeam[j];
            }
        }
        max = min(abs(aScore - bScore), max)
        result = min(result, max);
    }
}
int main() {
    cin >> n;
    oneTeam = n / 2;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> s[i][j];
        }
    }
    dfs(1);
}