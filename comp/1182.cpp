#include <cstdio>
using namespace std;
int arr[21];
int main() {
    int n, s;
    scanf("%d %d", &n, &s);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int count = 0;
    for (int i = 1; i < (1 << n); i++) {
        int sum = 0;
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                sum += arr[j];
            }
        }
        if (sum == s)
            count++;
    }
    printf("%d", count);
}