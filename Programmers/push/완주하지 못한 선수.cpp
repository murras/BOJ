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