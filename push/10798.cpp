#include <cstdio>
#include <iostream>
using namespace std;

char c[5][15];
bool check(char c) {
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') ||
           (c >= '0' && c <= '9');
}
int main() {
    int ar[5];
    int n = 5;
    int i = 0, j = 0;
    for(int i=0;i<5;i++){
        scanf("%s", &c[i]);
    }

    for (int k = 0; k < 15; k++) {
        for (int l = 0; l < 5; l++) {
            if(check(c[l][k]))
                cout << c[l][k];
        }
    }
}