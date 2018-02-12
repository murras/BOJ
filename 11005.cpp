// 알고리즘 기초 4 p.21
#include <iostream>
#include <vector>
using namespace std;
int main() {
	int n, b;
	vector<int> v;
	cin >> n >> b;
	while (n >= b){
		v.push_back(n%b);
		n /= b;
	}
	v.push_back(n);
	for (int i = v.size() - 1; i >= 0; i--) {
		if (v[i] >= 10) {
			char s;
			s = v[i] + 'A'-10;
			cout << s;
		}
		else cout << v[i];
	}
	cout << endl;		
}