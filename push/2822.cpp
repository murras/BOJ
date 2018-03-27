#include <algorithm>
#include <iostream>
using namespace std;
void min_(int *arr) {
    int min = 151;
    int index = 0;
    for (int i = 0; i < 9; i++) {
        if (arr[i] < 0) {
            continue;
        }
        if (min > arr[i]) {
            min = arr[i];
            index = i;
        }
    }
    arr[index] = -1;
}
int main() {
    int arr[8];
    int sum = 0;
    for (int i = 0; i < 8; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < 3; i++) {
        min_(arr);
    }
    for(int i=0;i<8;i++){
        if(arr[i]<0){
            continue;
        }
        sum+=arr[i];
    }
    cout << sum << '\n';
    for(int i=0;i<8;i++){
        if(arr[i]<0){
            continue;
        }
        cout << i+1 << ' ';
    }
    
}