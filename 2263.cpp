// 알고리즘 중급 Part1
#include <iostream>
using namespace std;
int in[100001];
int post[100001];
int root_position[100001];
void pre(int in_begin, int in_end, int post_begin, int post_end) {
	if (in_begin > in_end || post_begin > post_end)
		return;
	int root = post[post_end];
	cout << root << ' ';
	int rp = root_position[root];
	int leftchild = rp - in_begin;

	pre(in_begin, rp - 1, post_begin, post_begin + leftchild - 1);
	pre(rp + 1, in_end, post_begin + leftchild, post_end - 1);
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> in[i];
	for (int i = 0; i < n; i++)
		cin >> post[i];
	for (int i = 0; i < n; i++)
		root_position[in[i]] = i; // inorder에서의 root 위치
	pre(0, n - 1, 0, n - 1);
	cout << endl;
}