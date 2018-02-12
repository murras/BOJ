// 알고리즘 중급 Part1 1
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int M, N, K;
	cin >> M >> N >> K;
	int result = 0;
	while (M >= 2 && N >= 1 && M + N >= K + 3) {
		result++;
		M -= 2;
		N--;
	}
	cout << result << '\n';
}