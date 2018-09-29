#include <iostream>
using namespace std;
int num[] = {6,2,5,5,4,5,6,3,7,5};
int main(){
    char c[15];
    cin >> c;
    int i = 0;
    int sum = 0;
    while(c[i]!='\0'){
        sum += num[c[i]-'0'];
        i++;
    }
    cout << sum;
}