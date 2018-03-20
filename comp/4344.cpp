#include <iostream>
#include <cstdio>
using namespace std;
float arr[1001];
int main(){
    int c;
    cin >> c;
    while(c--){
        int n;
        float sum=0;
        cin >> n;
        for(int i=0; i<n; i++){
            cin >> arr[i];
            sum += arr[i];
        } 
        float aver = sum / n;
        float good=0;
        for(int i=0; i<n; i++){
            if(aver<arr[i])
                good++;
        }
        printf("%.3f%%\n", good/n*100);
    }
}