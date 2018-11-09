// STL 3 p.82
#include <iostream>
#include <queue>
using namespace std;
int main(){
    priority_queue<int, vector<int>, greater<int> > pq;
    int n;
    cin >> n;
    while(n--){
        int x;
        cin >> x;
        if(x == 0){
            if(pq.empty()){
                cout << 0 << endl;
            }
            else {
            cout << pq.top() << endl;
            pq.pop();
            }
        }
        else
            pq.push(x);
    }
}
