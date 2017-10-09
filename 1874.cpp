//문제 https ://www.acmicpc.net/problem/1874
//스택(stack)은 기본적인 자료구조 중 하나로, 컴퓨터 프로그램을 작성할 때 자주 이용되는 개념이다.스택은 자료를 넣는(push) 입구와 자료를 뽑는(pop) 입구가 같아 제일 먼저 들어간 자료가 제일 나중에 나오는(FILO, first in last out) 특성을 가지고 있다.
//
//1부터 n까지의 수를 스택에 넣었다가 뽑아 늘어놓음으로써, 하나의 수열을 만들 수 있다.이 때, 스택에 push하는 순서는 반드시 오름차순을 지키도록 한다고 하자.임의의 수열이 주어졌을 때 스택을 이용해 그 수열을 만들 수 있는지 없는지, 있다면 어떤 순서로 push와 pop 연산을 수행해야 하는지를 알아낼 수 있다.이를 계산하는 프로그램을 작성하라.
//
//입력
//첫 줄에 n(1≤n≤100, 000)이 주어진다.둘째 줄부터 n개의 줄에는 수열을 이루는 1이상 n이하의 정수가 하나씩 순서대로 주어진다.물론 같은 정수가 두 번 나오는 일은 없다.
//
//출력
//입력된 수열을 만들기 위해 필요한 연산을 한 줄에 한 개씩 출력한다.push연산은 + 로, pop 연산은 - 로 표현하도록 한다.불가능한 경우 NO를 출력한다.
//
//예제 입력  복사
//8
//4
//3
//6
//8
//7
//5
//2
//1
//예제 출력  복사
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