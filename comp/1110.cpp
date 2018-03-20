#include <cstdio>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    int arr[3], cnt = 0;

    bool c;
    arr[2] = n / 10; // 10의 자리
    arr[1] = n % 10; // 1의 자리
    do
    {
        arr[0] = (arr[1] + arr[2]) % 10; // 각 자리 숫자 합
        // 다음 수 만들기
        arr[2] = arr[1];
        arr[1] = arr[0];
        cnt++;
        c = n == (arr[2] * 10 + arr[1]);
    } while (!c);

    printf("%d\n", cnt);
}