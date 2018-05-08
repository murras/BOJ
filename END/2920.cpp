#include <cstdio>
#include <iostream>
using namespace std;
int a[8];
int main() {
    for (int i = 0; i < 8; i++) {
        scanf("%d", &a[i]);
    }
    bool descend = true;
    bool ascend = true;
    
    for (int i = 0; i < 8; i++) {
        if (a[i] == i + 1) continue;
        ascend = false;
    }
    for (int i = 0; i < 8; i++) {
        if (a[i] == 8 - i) continue;
        descend = false;
    }

    if (ascend) cout << "ascending" << '\n';

    if (descend) cout << "descending" << '\n';

    if (!ascend && !descend) cout << "mixed" << '\n';
}