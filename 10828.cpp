//���� https://www.acmicpc.net/problem/10828
//������ �����ϴ� ������ ������ ����, �Է����� �־����� ����� ó���ϴ� ���α׷��� �ۼ��Ͻÿ�.
//
//����� �� �ټ� �����̴�.
//
//push X : ���� X�� ���ÿ� �ִ� �����̴�.
//pop : ���ÿ��� ���� ���� �ִ� ������ ����, �� ���� ����Ѵ�.���� ���ÿ� ����ִ� ������ ���� ��쿡�� - 1�� ����Ѵ�.
//	size : ���ÿ� ����ִ� ������ ������ ����Ѵ�.
//	empty : ������ ��������� 1, �ƴϸ� 0�� ����Ѵ�.
//	top : ������ ���� ���� �ִ� ������ ����Ѵ�.���� ���ÿ� ����ִ� ������ ���� ��쿡�� - 1�� ����Ѵ�.
//	�Է�
//	ù° �ٿ� �־����� ����� �� N(1 �� N �� 10, 000)�� �־�����.��° �ٺ��� N���� �ٿ��� ����� �ϳ��� �־�����.�־����� ������ 1���� ũ�ų� ����, 100, 000���� �۰ų� ����.������ �������� ���� ����� �־����� ���� ����.
//	���
//	����ؾ��ϴ� ����� �־��� ������, �� �ٿ� �ϳ��� ����Ѵ�.
//
//	���� �Է�  ����
//	14
//	push 1
//	push 2
//	top
//	size
//	empty
//	pop
//	pop
//	pop
//	size
//	empty
//	pop
//	push 3
//	empty
//	top
//	���� ���  ����
//	2
//	2
//	0
//	2
//	1
//	- 1
//	0
//	1
//	- 1
//	0
//	3
#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main() {
	int n;
	string s;
	stack<int> st;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		if (s == "push") {
			int in;
			cin >> in;
			st.push(in);
		}
		else if (s == "pop") {
			if (!st.empty()) {
				cout << st.top() << endl;
				st.pop();
			}
			else
				cout << "-1" << endl;
		}
		else if (s == "top") {
			if (st.empty())
				cout << -1 << endl;
			else cout << st.top() << endl;
		}
		else if (s == "size")
			cout << st.size() << endl;
		else if (s == "empty") {
			if (st.empty())
				cout << "1" << endl;
			else
				cout << "0" << endl;;
		}		
	}
}