#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int cute = 0;
    int no = 0;
    for (int i = 1; i <= n; i++) {
        int input;
        cin >> input;
        if (input) {
            cute++;
        } else {
            no++;
        }
    }
    if (cute > no) {
        cout << "Junhee is cute!" << '\n';
    } else {
        cout << "Junhee is not cute!" << '\n';
    }
}