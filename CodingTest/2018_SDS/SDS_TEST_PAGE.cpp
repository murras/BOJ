#include <iostream>
using namespace std;
int rest[1001];
void solve(int);
int main()
{
    int test;
    cin >> test;
    for (int i = 1; i <= test; i++) {
        solve(i);
    }
}

void solve(int i)
{
    int N, S, J, K;
    cin >> N >> S >> J >> K;
    for (int i = 1; i <= K; i++) {
        cin >> rest[i];
    }
    int kcount = 1;
    int answer = 0;
    while (S <= N) {
        // cout << "S : " << S << '\n';
        for (int r = 1; r <= K; r++) {
            if (S == rest[r]) {
                answer++;
                // cout << "rest page : " << rest[kcount] << '\n';
                kcount++;
            }
        }
        S += (J + 1);
    }
    cout << "#" << i << " " << answer << '\n';
}