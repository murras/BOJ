//���� https://www.acmicpc.net/problem/10845
//������ �����ϴ� ť�� ������ ����, �Է����� �־����� ����� ó���ϴ� ���α׷��� �ۼ��Ͻÿ�.
//
//����� �� ���� �����̴�.
//
//push X : ���� X�� ť�� �ִ� �����̴�.
//pop : ť���� ���� �տ� �ִ� ������ ����, �� ���� ����Ѵ�.���� ť�� ����ִ� ������ ���� ��쿡�� - 1�� ����Ѵ�.
//	size : ť�� ����ִ� ������ ������ ����Ѵ�.
//	empty : ť�� ��������� 1, �ƴϸ� 0�� ����Ѵ�.
//	front : ť�� ���� �տ� �ִ� ������ ����Ѵ�.���� ť�� ����ִ� ������ ���� ��쿡�� - 1�� ����Ѵ�.
//	back : ť�� ���� �ڿ� �ִ� ������ ����Ѵ�.���� ť�� ����ִ� ������ ���� ��쿡�� - 1�� ����Ѵ�.
//	�Է�
//	ù° �ٿ� �־����� ����� �� N(1 �� N �� 10, 000)�� �־�����.�Ѥ� �ٺ��� N���� �ٿ��� ����� �ϳ��� �־�����.�־����� ������ 1���� ũ�ų� ����, 100, 000���� �۰ų� ����.������ �������� ���� ����� �־����� ���� ����.
//
//	���
//	����ؾ��ϴ� ����� �־��� ������, �� �ٿ� �ϳ��� ����Ѵ�.
#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
	queue<int> q;
	int n, num;
	string cmd;
	cin >> n;

	while (n--) {
		cin >> cmd;
		if (cmd == "push") {
			cin >> num;
			q.push(num);
		}
		else if (cmd == "pop") {
			if (q.empty())
				cout << -1 << endl;
			else {
				cout << q.front() << endl;
				q.pop();
			}
		}
		else if (cmd == "size") {
			cout << q.size() << endl;
		}
		else if (cmd == "empty") {
			if (q.empty()) 
				cout << 1 << endl;
			else cout << 0 << endl;
		}
		else if (cmd == "front") {
			if (q.empty())
				cout << -1 << endl;
			else cout << q.front() << endl;
		}
		else if (cmd == "back") {
			if (q.empty())
				cout << -1 << endl;
			else cout << q.back() << endl;
		}
	}
	
}