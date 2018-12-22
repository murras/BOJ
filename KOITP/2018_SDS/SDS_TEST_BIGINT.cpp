#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
void solve(int);
int main()
{
    int test;
    cin >> test;
    for (int i = 1; i <= test; i++) {
        solve(i);
    }
}

void solve(int t)
{
    int n, p, m;
    cin >> n >> p >> m;
    vector<int> v;
    long long sum;
    int input;
    cin >> input;
    sum = input;
    n--;
    while (n--) {
        cin >> input;
        v.push_back(input);
    }
    sort(v.begin(), v.end());
    int size = v.size();
    int i = 0;
    while (m--) {
        v[i] = -v[i];
        i++;
    }
    for (int i = 0; i < size; i++) {
        sum += v[i];
    }

    cout << "#" << t << " " << sum << '\n';
}