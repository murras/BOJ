// STL 5
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int n;
	cin >> n;
	vector<int> v;
	while (n--) {
		int vn;
		cin >> vn;
		v.push_back(vn);
	}
	sort(v.begin(), v.end());
	int maxx = 0;
	do {
		int sum = 0;
		for (int i = 1; i < v.size(); i++)
			sum += abs(v[i] - v[i - 1]);
		maxx = max(sum, maxx);
	} while (next_permutation(v.begin(),v.end()));
	cout << maxx << endl;
}