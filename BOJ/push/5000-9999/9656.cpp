// 알고리즘 고급 Ch7
#include <iostream>
using namespace std;
bool d[1001];
int main(){
    int n;
    cin >> n;
    d[0] = true;
    for(int i=1; i<=1000; i++){
		d[i] = false;
        if(i-1 >= 0 && d[i-1] == false)
            d[i] = true;
        if(i-1 >= 0 && d[i-1] == false)
            d[i] = true;
    }
    if(d[n])
        cout << "SK" << '\n';
    else
        cout << "CY" << '\n';
}

