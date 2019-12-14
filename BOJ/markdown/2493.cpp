#include <bits/stdc++.h>
using namespace std;
const int MAX_ = 500001;
int result[MAX_];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    stack<pair<int, int>> s;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int input;
        cin >> input;

        while (!s.empty())
        {
            int num = s.top().first;
            int index = s.top().second;

            if (num > input)
            {
                cout << s.top().second << " ";
                break;
            }
            s.pop();
        }
        if (s.empty())
        {
            cout << "0 ";
        }
        s.push({input, i});
    }
}