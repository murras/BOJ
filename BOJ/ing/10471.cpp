#include <algorithm>
#include <iostream>
#include <set>
#include <vector>
using namespace std;
int parray[101];
int main()
{
    int w, p;
    cin >> w >> p;
    vector<int> pv;
    set<int> s;
    pv.push_back(0);
    for (int i = 0; i < p; i++) {
        int input;
        cin >> input;
        pv.push_back(input);
    }
    pv.push_back(w);
    sort(pv.begin(), pv.end());
    for (int i = 0; i < p+2; i++) {
        for (int j = 0; j < i; j++) {
            s.insert(pv[i] - pv[j]);
        }
    }
    set<int>::iterator iter;
    for (iter = s.begin(); iter != s.end(); iter++) {
        cout << *iter << " ";
    }
}