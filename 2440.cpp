//���� https ://www.acmicpc.net/problem/2440
//ù° �ٿ��� �� N��, ��° �ٿ��� �� N - 1��, ..., N��° �ٿ��� �� 1���� ��� ����
//
//�Է�
//ù° �ٿ� N(1 <= N <= 100)�� �־�����.
//
//���
//ù° �ٺ��� N��° �� ���� ���ʴ�� ���� ����Ѵ�.
//
//���� �Է�  ����
//5
//���� ���  ����
//*****
//****
//***
//**
//*
#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = n-i; j > 0; j--)
			cout << "*";
		cout << endl;
	}
}