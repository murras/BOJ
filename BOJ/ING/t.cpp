#include <bits/stdc++.h>
using namespace std;

int foo(int *a) {
    printf("%d", *(a + 10));
    printf("\n");
    printf("%d", a[9]);
}
int main() {
    int a[8] = {1, -2, -3, -4, -5, -6, -7, -8};
    foo(a);
}