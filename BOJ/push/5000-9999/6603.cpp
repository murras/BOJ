#include <iostream>
using namespace std;

int arr[14];
int res[14];
int n;
void dfs(int start, int count)
{
    if (count == 6)
    {
        for (int i = 0; i < 6; i++)
        {
            cout << res[i] << ' ';
        }
        cout << '\n';
        return;
    }
    for (int i = start; i < n; i++)
    {
        res[count] = arr[i];
        dfs(i + 1, count + 1);
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    while (true)
    {
        cin >> n;
        if (n == 0)
            break;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        dfs(0, 0);
        cout << '\n';
    }
}