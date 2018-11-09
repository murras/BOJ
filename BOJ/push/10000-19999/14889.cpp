#include <algorithm>
#include <iostream>
#include <vector>
#define INF 0x3f3f3f3f
using namespace std;
int n;
int stat[21][21];
int result = INF;

void dfs(string member, int startTeam, int linkTeam) {
    // 팀 멤버가 모두 찼을 때
    int memSize = member.size();
    if (memSize == n) {
        vector<int> start, link;
        for (int i = 0; i < memSize; ++i) {
            if (member[i] == '1') {
                start.push_back(i);
            } else {
                link.push_back(i);
            }
        }
        int startScore = 0;
        for (int i = 0; i < start.size(); ++i) {
            for (int j = i + 1; j < start.size(); ++j) {
                startScore += (stat[start[i]][start[j]] + stat[start[j]][start[i]]);
            }
        }
        int linkScore = 0;
        for (int i = 0; i < link.size(); ++i) {
            for (int j = i + 1; j < link.size(); ++j) {
                linkScore += (stat[link[i]][link[j]] + stat[link[j]][link[i]]);
            }
        }
        //cout << "startscroe: " << startScore << '\n';
        //cout << "startscroe: " << startScore << '\n';

        result = min(result, abs(startScore - linkScore));
        return;
    }
    if (startTeam < (n / 2)) {
        dfs(member + "1", startTeam + 1, linkTeam);
    }
    if (linkTeam < (n / 2)) {
        dfs(member + "0", startTeam, linkTeam + 1);
    }
}
int main() {
    cin >> n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> stat[i][j];
        }
    }
    dfs("", 0, 0);
    cout << result << '\n';
}