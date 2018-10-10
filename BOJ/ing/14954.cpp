#include <iostream>
#include <vector>
using namespace std;
bool visited[10000];
int N;
bool h(int n) {
    if (n == 1) {
        return true;
    }
    if (visited[n]) {
        return false;
    }
    visited[n] = true;
    int sum = 0;
    while (n) {
        sum += (n % 10) * (n % 10);
        n /= 10;
    }
    h(sum);
}
int main() {
    cin >> N;
    if(h(N)) {
        cout << "HAPPY";
    }
    else{
        cout << "UNHAPPY";
    }
}