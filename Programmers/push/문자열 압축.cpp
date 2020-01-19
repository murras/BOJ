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
        int count = 1;
        string temp_answer = "";
        string pre_sub = s.substr(0, i);
        
        for(int j=i; j<len; j+=i)
        {
            string now_sub = s.substr(j, i);
            if(pre_sub == now_sub)
            {
                count++;
            }
            else
            {
                if(count == 1)
                {
                    temp_answer = temp_answer + pre_sub;
                }
                else
                {
                    temp_answer = temp_answer + to_string(count) + pre_sub;
                    count = 1;
                }
                pre_sub = now_sub;
            }
            if(j+i >= len)
            {
                if(count == 1)
                {
                    temp_answer = temp_answer + s.substr(j);
                }
                else
                {
                    temp_answer = temp_answer + to_string(count) + pre_sub;
                }
                break;
            }
        }
        answer = (answer < temp_answer.length()) ? answer : temp_answer.length();
    }
    return answer;
}