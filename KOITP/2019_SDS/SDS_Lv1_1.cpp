#include <iostream>
#include <string>
using namespace std;
int main() {
    int test, n;
    int i = 0;
    cin >> test;
    char c;
    while (test--) {
        string result = "";
        cin >> n;
        i++;
        while (n--) {
            cin >> c;
            if (result[0] > c) {
                result = result + c;
            } else {
                result = c + result;
            }
        }
        cout << "#" << i << " " << result;
    }
    return 0;
}
