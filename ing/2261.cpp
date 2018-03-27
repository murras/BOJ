#include <iostream>
#include <vector>
using namespace std;
vector<pair<int, int> > v;
int b();
int d(int x1, int y1, int x2, int y2){
    return (x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
}
int main() {
    int n;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }
}