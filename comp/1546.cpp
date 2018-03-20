#include <iostream>
#include <cstdio>
using namespace std;
float arr[1001];
int main()
{
    int n;
    cin >> n;
    float max = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i] / max * 100;
        sum += arr[i];
    }
    float result = sum / (float)n;
    printf("%.2f\n", result);
}