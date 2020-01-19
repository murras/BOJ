## [프로그래머스 문자열 압축 문제](https://programmers.co.kr/learn/courses/30/lessons/60057)

1 ~ i번째의 문자열씩 끊어가면서 모든 문자를 확인한다. 같은 문자열일 경우 반복 횟수(count)를 1씩 증가시키고, 다른 문자열일 경우 여태 반복된 문자열 정보를 추가한 뒤(반복 횟수 + 문자열) 반복 횟수를 1로 초기화한 후 다시 같은 작업을 반복한다.

> 문자열 압축.cpp

```cpp
#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(string s) {
    int answer = s.length();
    int len = s.size();
    
    // i는 부분 문자열의 길이
    // 문자열 길이의 절반까지 반복
    for(int i=1; i <= len / 2; ++i)
    {
        int count = 1; // 반복 횟수, 초기화를 1회로
        string temp_answer = "";
        string pre_sub = s.substr(0, i); // i번째 글자까지
        
        for(int j=i; j<len; j+=i)
        {
            string now_sub = s.substr(j, i);
            if(pre_sub == now_sub) // 반복되는 경우
            {
                count++;
            }
            else // 반복되지 않을 경우
            {
                if(count == 1)
                {
                    temp_answer = temp_answer + pre_sub;
                }
                else
                {
                    temp_answer = temp_answer + to_string(count) + pre_sub;
                    count = 1; // 다시 반복횟수 1로
                }
                pre_sub = now_sub; // 새로운 문자열이 반복되는지 체크하기 위해
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