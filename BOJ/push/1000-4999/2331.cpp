#include <bits/stdc++.h>
using namespace std;
int result;
int visitCount[1000000];

int mult(int A, int P) {
    int next = 0;
    while (A > 0) {
        next += (int)floor(pow(A % 10, P)+0.5);
        A /= 10;
    }
    return next;
}

void DFS(int A, int P) {
    visitCount[A]++;
    if (visitCount[A] > 2) {
        return;
    }
    DFS(mult(A, P), P);
}

int main() {
    int A, P;
    cin >> A >> P;
    DFS(A, P);

    for (int i = 0; i < 1000000; i++) {
        if (visitCount[i] == 1) {
            result++;
        }
    }

    cout << result;
}