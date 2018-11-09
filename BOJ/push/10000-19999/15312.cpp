#include <iostream>
#include <string>
using namespace std;
int main()
{
    int count[] = { 3, 2, 1, 2, 3, 3, 2, 3, 3, 2, 2, 1, 2, 2, 1, 2, 2, 2, 1, 2, 1, 1, 1, 2, 2, 1 };
    //////////////{ A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, Q, R, S, T, U, V, W, X, Y, Z }
    string a, b;
    cin >> a >> b;
    int len = a.length();
    int arr[2001], brr[2001], r[4002];

    for (int i = 0; i < len; i++) {
        arr[i] = count[a[i] - 'A'];
        brr[i] = count[b[i] - 'A'];
    }

    for (int i = 0; i < 2 * len; i++) {
        if (i % 2 == 0) {
            r[i] = arr[i / 2];
        } else {
            r[i] = brr[i / 2];
        }
    }
    for (int i = 1; i < 2 * len - 1; i++) {
        for (int j = 0; j < 2 * len - i; j++) {
            r[j] = (r[j] + r[j + 1]) % 10;
        }
    }
    cout << r[0] << r[1] << '\n';
}
