## [���α׷��ӽ� �������� ���� ���� ����](https://programmers.co.kr/learn/courses/30/lessons/42576)

�� ���� ����� ���������ϴ�. �ϳ��� participant, completion�� ���� sort�ϰ� ���������� �ϳ��� ���ϴ� �Ͱ� map�� �̿��ϴ� ���̿��µ� map�� ����Ͽ� Ǯ�����ϴ�.

�̸�(key)�� ������ 1�� ������Ű��, �������� ��� 1�� ���ҽ�Ų �� 0�� �ƴ� ���� ����ϴ� ������ ����Դϴ�.

> �������� ���� ����.cpp

```cpp
#include <string>
#include <vector>
#include <map>
#include <iostream>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    map<string, int> m;
    
    for(auto name : participant)
    {
        m[name]++;
    }
    
    for(auto name : completion)
    {
        m[name]--;
    }
    
    for(auto kv : m)
    {
        if(kv.second != 0)
        {
            answer = kv.first;
            break;
        }
    }
    
    return answer;
}
```