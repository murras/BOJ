// STL 5 p.50
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
struct Person {
	string name;
	int kor;
	int eng;
	int math;
	friend ostream& operator<< (ostream& os, Person& p);
};
ostream& operator<< (ostream& os, Person& p) {
	os << p.name;
	return os;
}
bool cmp(const Person &a, const Person &b) {
	if (a.kor > b.kor)
		return true;
	else if (a.kor == b.kor) {
		if (a.eng < b.eng)
			return true;
		else if (a.eng == b.eng) {
			if (a.math > b.math)
				return true;
			else if (a.math == b.math)
				return a.name < b.name;
		}
	}
	return false;
}
int main() {
	int n;
	cin >> n;
	vector<Person> v;
	while (n--) {
		string s;
		int k, e, m;
		cin >> s >> k >> e >> m;
		v.push_back({ s,k,e,m });
	}
	sort(v.begin(), v.end(), cmp);
	for (auto x : v)
		cout << x.name << '\n';
}