## [���α׷��ӽ� ���ڿ� ���� ����](https://programmers.co.kr/learn/courses/30/lessons/60057)

1 ~ i��°�� ���ڿ��� ����鼭 ��� ���ڸ� Ȯ���Ѵ�. ���� ���ڿ��� ��� �ݺ� Ƚ��(count)�� 1�� ������Ű��, �ٸ� ���ڿ��� ��� ���� �ݺ��� ���ڿ� ������ �߰��� ��(�ݺ� Ƚ�� + ���ڿ�) �ݺ� Ƚ���� 1�� �ʱ�ȭ�� �� �ٽ� ���� �۾��� �ݺ��Ѵ�.

> ���ڿ� ����.cpp

```cpp
#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(string s) {
    int answer = s.length();
    int len = s.size();
    
    // i�� �κ� ���ڿ��� ����
    // ���ڿ� ������ ���ݱ��� �ݺ�
    for(int i=1; i <= len / 2; ++i)
    {
        int count = 1; // �ݺ� Ƚ��, �ʱ�ȭ�� 1ȸ��
        string temp_answer = "";
        string pre_sub = s.substr(0, i); // i��° ���ڱ���
        
        for(int j=i; j<len; j+=i)
        {
            string now_sub = s.substr(j, i);
            if(pre_sub == now_sub) // �ݺ��Ǵ� ���
            {
                count++;
            }
            else // �ݺ����� ���� ���
            {
                if(count == 1)
                {
                    temp_answer = temp_answer + pre_sub;
                }
                else
                {
                    temp_answer = temp_answer + to_string(count) + pre_sub;
                    count = 1; // �ٽ� �ݺ�Ƚ�� 1��
                }
                pre_sub = now_sub; // ���ο� ���ڿ��� �ݺ��Ǵ��� üũ�ϱ� ����
            }
            if(j+i >= len)
            {
                if(count == 1)
                {
                    temp_answer = temp_answer + s.substr(j);
                }
                else
                {
                    temp_answer = temp_answer + to_string(count) + pre_sub + s.substr(j);
                }
                break;
            }
        }
        answer = (answer < temp_answer.length()) ? answer : temp_answer.length();
    }
    return answer;
}
```