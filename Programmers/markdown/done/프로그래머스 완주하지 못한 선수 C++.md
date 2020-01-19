## [프로그래머스 완주하지 못한 선수 문제](https://programmers.co.kr/learn/courses/30/lessons/42576)

두 가지 방법이 생각났습니다. 하나는 participant, completion을 각각 sort하고 위에서부터 하나씩 비교하는 것과 map을 이용하는 것이였는데 map을 사용하여 풀었습니다.

이름(key)이 들어오면 1씩 증가시키고, 완주했을 경우 1씩 감소시킨 뒤 0이 아닌 값을 출력하는 간단한 방법입니다.

> 완주하지 못한 선수.cpp

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