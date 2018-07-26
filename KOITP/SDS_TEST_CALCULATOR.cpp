#include <algorithm>
#include <iostream>
#include <queue>
using namespace std;
void solve();
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int test;
    cin >> test;
    for (int i = 1; i <= test; i++) {
        cout << "#" << i << " ";
        solve();
    }
}

void solve()
{
    int t;
    cin >> t;
    priority_queue<long long, vector<long long>, greater<long long>> pq;
    for (int i = 0; i < t; i++) {
        long long input;
        cin >> input;
        pq.push(input);
    }

    long long time = 0;
    int it = t - 1;

    while (it--) {
        long long t1 = pq.top();
        pq.pop();
        time += t1;
        long long t2 = pq.top();
        pq.pop();
        time += t2;
        pq.push(t1+t2);
    }
    cout << time << '\n';
}