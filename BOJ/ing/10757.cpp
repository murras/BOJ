#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector<int> v1;
vector<int> v2;
vector<int> result;
int main() {
    string a, b;
    cin >> a >> b;
    for (int i = a.size()-1; i >= 0; i--) {
		int input = (int)(a[i] - '0');
		v1.push_back(input);
    }
    for (int i = b.size()-1; i >= 0; i--) {
		int input = (int)(b[i] - '0');
		v2.push_back(input);
    }
    
}