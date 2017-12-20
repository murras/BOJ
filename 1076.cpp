#include <iostream>
#include <string>
#include <map>
using namespace std;
int main() {
	map<string, int> map1 = {
		{ "black",0 },{ "brown", 1 },{ "red", 2 },
		{ "orange", 3 },{ "yellow", 4 },{ "green", 5 },
		{ "blue", 6 },{ "violet", 7 },{ "grey", 8 },
		{ "white",9 }
	};
	string a, b, c;
	cin >> a >> b >> c;
	long long result = map1[a] * 10 + map1[b];
	for (int i = 0; i < map1[c]; i++)
		result *= 10;

	cout << result << endl;

}