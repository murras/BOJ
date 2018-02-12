// 알고리즘 중급 Part1 1
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int n, input;
	cin >> n;
	vector<int> plus, minus;
	int one = 0;
	bool zero = false;
	while (n--) {
		cin >> input;
		if (input > 1)
			plus.push_back(input);
		else if (input == 1)
			one++;
		else if (input == 0)
			zero = true;
		else if (input < 0) 
			minus.push_back(input);	
	}
	sort(plus.begin(), plus.end());
	sort(minus.begin(), minus.end());
	reverse(plus.begin(), plus.end());
	
	if (plus.size() % 2 == 1)
		plus.push_back(1);

	if (minus.size() % 2 == 1) {
		if (zero)
			minus.push_back(0);
		else
			minus.push_back(1);
	}
	int result = one;

	for (int i = 0; i < plus.size(); i += 2)
		result += plus[i] * plus[i + 1];
	for (int i = 0; i < minus.size(); i += 2)
		result += minus[i] * minus[i + 1];

	cout << result << '\n';
	
}