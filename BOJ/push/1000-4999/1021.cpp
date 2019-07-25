#include <bits/stdc++.h>
using namespace std;

void printD(deque<int> q) {
    cout << '\n';
    for (auto s = q.begin(); s != q.end(); ++s)
        cout << *s << " ";
    cout << '\n';
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int size;
    cin >> size;
    deque<int> d;
    int count = 0;

    for (int i = 0; i < size; ++i) {
        d.push_back(i + 1);
    }

    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int location;
        cin >> location;

        //printD(d);

        if (location == d.front()) {
            d.pop_front();
            continue;
        }
        int gap = 0;
        for (auto s = d.begin(); s != d.end(); ++s) {
            if (*s == location) {
                break;
            }
            gap++;
        }
        // 2를 하는게 최솟값
        if (gap <= (d.size() / 2)) {
            for (int j = 0; j < gap; ++j) {
                d.push_back(d.front());
                d.pop_front();
                count++;
                //cout << "2 ";
            }
            d.pop_front();
        }
        // 3을 하는게 더 최솟값
        else {
            gap = d.size() - gap;
            for (int j = 0; j < gap; ++j) {
                d.push_front(d.back());
                d.pop_back();
                count++;
                //cout << "3 ";
            }
            d.pop_front();
        }
    }
    cout << count;
}