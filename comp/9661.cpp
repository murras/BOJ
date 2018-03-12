// 알고리즘 고급 Ch4
#include <iostream>
using namespace std;
int main(){
    long long n;
    cin >> n;
	if(n%5==0 || n%5==2)
        cout << "CY" << '\n';
    else
        cout << "SK" << '\n';
}       
