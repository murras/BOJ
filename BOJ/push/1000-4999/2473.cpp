#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;
typedef long long ll;

int main() {
    int n;
    ll a[5001];
    cin >> n;
    for (int i = 0; i < n; i++) {
        scanf("%lld", &a[i]);
    }

    int ans1 = 0, ans2 = 1, ans3 = 2;
    sort(a, a + n);
    for (int i = 0; i < n - 2; i++) {
        int left = i + 1;
        int right = n - 1;
        int j = left;
        int k = right;
        while (left < right) {
            if (abs(a[i] + a[j] + a[k]) > abs(a[i] + a[left] + a[right])) {
                j = left;
                k = right;
            }
            if (a[i] + a[left] + a[right] > 0) {
                right--;
            } else {
                left++;
            }
        }
        if (abs(a[ans1] + a[ans2] + a[ans3]) > abs(a[i] + a[j] + a[k])) {
            ans1 = i;
            ans2 = j;
            ans3 = k;
        }
    }
    printf("%lld %lld %lld", a[ans1], a[ans2], a[ans3]);
}