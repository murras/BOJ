#include <iostream>
using namespace std;

int arr[1001][1001];
int main() {
	int N, M;
	int from, to;
	cin >> N;
	cin >> M;
	
	

	for (int i = 1; i <= M; i++) {
		cin >> from >> to;
		arr[from][to] = 1;
		arr[to][from] = 1;
	}
	for (int i = 1; i <= N; i++) {
		int sum = 0;
		for (int j = 1; j <= N; j++)
			sum += arr[i][j];
		cout << sum << endl;
	}
}