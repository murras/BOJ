// STL 3 p.40
#include <iostream>
#include <list>
using namespace std;
int main() {
	int n;
	cin >> n;
	list<pair<int, int>> a;
	for (int i = 1; i <= n; i++) {
		int x;
		cin >> x;
		a.push_back({ x,i });
	}
	auto it = a.begin();
	for (int i = 0; i < n - 1; i++) {
		cout << (it->second) << ' ';
		int count = it->first;

		if (count > 0) {
			auto temp = it;
			temp++;
			if (temp == a.end())
				temp = a.begin();
			a.erase(it);
			it = temp;
			for (int i = 1; i < count; i++) {
				it++;
				if (it == a.end())
					it = a.begin();
			}
		}
		else if (count < 0) {
			count = -count;
			auto temp = it;
			if (temp == a.begin())
				temp = a.end();
			temp--;
			a.erase(it);
			it = temp;
			for (int i = 1; i < count; i++) {
				if (it == a.begin())
					it = a.end();
				it--;
			}
		}
	}
	cout << a.front().second << endl;
}