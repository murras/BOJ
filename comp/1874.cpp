//���� https ://www.acmicpc.net/problem/1874
//����(stack)�� �⺻���� �ڷᱸ�� �� �ϳ���, ��ǻ�� ���α׷��� �ۼ��� �� ���� �̿�Ǵ� �����̴�.������ �ڷḦ �ִ�(push) �Ա��� �ڷḦ �̴�(pop) �Ա��� ���� ���� ���� �� �ڷᰡ ���� ���߿� ������(FILO, first in last out) Ư���� ������ �ִ�.
//
//1���� n������ ���� ���ÿ� �־��ٰ� �̾� �þ�������ν�, �ϳ��� ������ ���� �� �ִ�.�� ��, ���ÿ� push�ϴ� ������ �ݵ�� ���������� ��Ű���� �Ѵٰ� ����.������ ������ �־����� �� ������ �̿��� �� ������ ���� �� �ִ��� ������, �ִٸ� � ������ push�� pop ������ �����ؾ� �ϴ����� �˾Ƴ� �� �ִ�.�̸� ����ϴ� ���α׷��� �ۼ��϶�.
//
//�Է�
//ù �ٿ� n(1��n��100, 000)�� �־�����.��° �ٺ��� n���� �ٿ��� ������ �̷�� 1�̻� n������ ������ �ϳ��� ������� �־�����.���� ���� ������ �� �� ������ ���� ����.
//
//���
//�Էµ� ������ ����� ���� �ʿ��� ������ �� �ٿ� �� ���� ����Ѵ�.push������ + ��, pop ������ - �� ǥ���ϵ��� �Ѵ�.�Ұ����� ��� NO�� ����Ѵ�.
//
//���� �Է�  ����
//8
//4
//3
//6
//8
//7
//5
//2
//1
//���� ���  ����
//+
//+
//+
//+
//-
//-
//+
//+
//-
//+
//+
//-
//-
//-
//-
//-
#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main() {
	stack<int> s;
	queue<char> q;

	int n;
	cin >> n;
	int i = 1;
	while (n--) {
		int x;
		cin >> x;

		while (s.empty() || s.top() < x) {
			s.push(i++);
			q.push('+');
		}

		if (s.top() == x) {
			s.pop();
			q.push('-');
		}
		else {
			printf("NO\n");
			return 0;
		}
	}
	while (!q.empty()) {
		printf("%c\n", q.front());
		q.pop();
	}
	return 0;
}