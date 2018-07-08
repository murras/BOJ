#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
struct P {
    int x;
    int y;
    P(int x, int y) {
        this->x = x;
        this->y = y;
    }
    bool operator<(const P &v) {
        if (x == v.x) {
            return y < v.y;
        } else {
            return x < v.x;
        }
    }
};
int power(int x) {
    return x * x;
    
}
int dist(P p1, P p2){
    return power(p1.x - p2.x)+power(p1.y-p2.y);
} 
vector<P> v;

int main() {
    int n;
    cin >> n;
    vector<P> v(n);
    for(int i=0; i<n;i++){
        cin >> a[i].x >> a[i].y;
    }
    sort(v.begin(), v.end());
}