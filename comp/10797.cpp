#include <iostream>
using namespace std; 
int main() {
    int n = 5; 
    int no, count = 0; 
    cin >> no; 
    while (n--) {
        int i; 
        cin >> i; 
        if (i == no)
            count++; 
    }
    cout << count << '\n'; 
}